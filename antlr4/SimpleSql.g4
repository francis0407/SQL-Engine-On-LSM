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
    : primaryExpression                                                               #valueExpressionDefault 
    | left=valueExpression opt=(PLUS | MINUS | ASTERISK |SLASH) right=valueExpression #arithmeticBinary
    | left=valueExpression opt=(PERCENT | DIV) right=valueExpression                  #arithmeticBinary
    | left=valueExpression opt=(AMPERSAND | PIPE) right=valueExpression               #arithmeticBinary
    | opt=(MINUS | TILDE | HAT) valueExpression                                       #arithmeticUnary 
    | left=valueExpression comparisonOperator right=valueExpression                   #comparison
    ;

primaryExpression
    : columnIdentifier      #columnReference
    | constant              #constantValue
    | '(' expression ')'    #parenthesizedExpression
    ;

constant
    : STRING+           #stringLiteral
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
    : identifier                     #tableIdentifierDefault
    | identifier AS identifier       #tableAlias
    ;

identifier
    : IDENTIFIER
    ;

comparisonOperator
    : EQ | NEQ | NEQJ | LT | LTE | GT | GTE | NSEQ
    ;

predicateOperator
    : OR | AND | NOT
    ;

booleanValue
    : TRUE_ | FALSE_
    ;

number
    : MINUS? INTEGER_LITERAL          #integerLiteral
    | MINUS? BIGINT_LITERAL           #bigIntLiteral
    | MINUS? SMALLINT_LITERAL         #smallIntLiteral
    | MINUS? DOUBLE_LITERAL           #doubleLiteral
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
NSEQ: '<=>';
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
DIV: 'DIV';
TILDE: '~';
AMPERSAND: '&';
PIPE: '|';
HAT: '^';

STRING
    : '\'' ( ~('\''|'\\') | ('\\' .) )* '\''
    | '"' ( ~('"'|'\\') | ('\\' .) )* '"'
    ;

DOUBLE_LITERAL
    : DIGIT+ '.' DIGIT+
    ; 

BIGINT_LITERAL
    : DIGIT+ 'L'
    ;

INTEGER_LITERAL
    : DIGIT+
    ;

SMALLINT_LITERAL
    : DIGIT+ 'S'
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
