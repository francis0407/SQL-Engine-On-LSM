grammar SimpleSql;

singleStatement
    : statement EOF
    ;

statement
    : createStatement   #createTableStatement
    | deleteStatement   #deleteValueStatement
    | insertStatement   #insertValueStatement
    | selectStatement   #QueryStatement
    ;

createStatement
    : (CREATE TABLE tablenName=tableIdentifier '('identifier dataType (',' identifier dataType)* ')')
    ;

indexClause
    : (INDEX ON '('identifier (',' identifier)*')')
    ;

deleteStatement
    : (DELETE FROM tablenName=tableIdentifier whereCluse?)
    ;

insertStatement
    : (INSERT INTO tableName=tableIdentifier VALUES '('expression (',' expression)*')' (',('expression (',' expression)*')')* )
    ;

selectStatement
    : (selectClause fromCluse whereCluse?)
    ;

selectClause
    : SELECT expression (',' expression)*
    ;    

fromCluse
    : FROM tableIdentifier (',' tableIdentifier)*
    ;

whereCluse
    : WHERE expression
    ;

expression
    : booleanExpression
    ;

booleanExpression
    : valueExpression                                                          #booleanExpressionDefaule
    | NOT booleanExpression                                                    #logicalNot
    | left=booleanExpression opt=(AND | OR) right=booleanExpression            #logicalBinary
    ;

valueExpression
    : primaryExpression                                                                          #valueExpressionDefault 
    | left=valueExpression opt=(PLUS | MINUS | ASTERISK | SLASH | PERCENT) right=valueExpression #arithmeticBinary
    | MINUS valueExpression                                                                      #arithmeticUnary 
    | left=valueExpression comparisonOperator right=valueExpression                              #comparison
    ;

primaryExpression
    : columnIdentifier      #columnReference
    | constant              #constantValue
    | '(' expression ')'    #parenthesizedExpression
    ;

constant
    : STRING            #stringLiteral
    | number            #numberLiteral
    | booleanValue      #booleanLiteral
    ;

dataType
    : IDENTIFIER
    ;

columnIdentifier
    : tableIdentifier '.' identifier    #columnWithTable
    | identifier                        #columnWithoutTable
    ;

tableIdentifier
    : tableName=identifier                        #tableIdentifierDefault
    | tableName=identifier AS alias=identifier    #tableAlias
    ;

identifier
    : IDENTIFIER
    ;

comparisonOperator
    : EQ | NEQ | NEQJ | LT | LTE | GT | GTE 
    ;

predicateOperator
    : OR | AND | NOT
    ;

booleanValue
    : TRUE_ | FALSE_
    ;

number
    : MINUS? INTEGER_LITERAL          #integerLiteral
    | MINUS? FLOAT_LITERAL            #floatLiteral
    ;

// key words
SELECT: 'SELECT';
FROM  : 'FROM';
WHERE : 'WHERE';
INSERT: 'INSERT';
INTO  : 'INTO';
VALUES: 'VALUES';
DELETE: 'DELETE';
CREATE: 'CREATE';
TABLE : 'TABLE';
INDEX : 'INDEX';
ON    : 'ON';
AS    : 'AS';

OR  : 'OR';
AND : 'AND';
NOT : 'NOT';

// avoid conflict in C++
TRUE_  : 'TRUE';
FALSE_ : 'FALSE';

EQ  : '=' | '==';
NEQ : '<>';
NEQJ: '!=';
LT  : '<';
LTE : '<=' | '!>';
GT  : '>';
GTE : '>=' | '!<';

// Binary operators
PLUS: '+';
MINUS: '-';
ASTERISK: '*';
SLASH: '/';
PERCENT: '%';

STRING
    : '\'' ( ~('\''|'\\') | ('\\' .) )* '\''
    | '"' ( ~('"'|'\\') | ('\\' .) )* '"'
    ;

FLOAT_LITERAL
    : DIGIT+ '.' DIGIT+
    ; 


INTEGER_LITERAL
    : DIGIT+
    ;

IDENTIFIER
    : (LETTER | DIGIT | '_')+
    ;

fragment DIGIT
    : [0-9]
    ;
fragment LETTER
    : [A-Z]
    ;

WS
    : [ \r\n\t]+ -> channel(HIDDEN)
    ;
