
#pragma once

#include <cstddef>

#include "leveldb/db.h"

namespace simplesql {

// Types 
typedef unsigned char byte;

// Arguments

#define MEMORYPOOL_BLOCK_SIZE 4096

#define ISBIGENDIAN (false)

#define GLOBAL_SETTING_TABLE_NAME "GLOBALSETTING"
#define SCHEMA_TABLE_NAME "SCHEMATABLE"
enum GlobalSettingID {
    TableCount,
    
};

} // namespace simplesql