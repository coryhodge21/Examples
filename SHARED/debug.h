/**
 * 
 */

#ifndef _DEBUG_H_
#define _DEBUG_H_

// For Printf
#include <stdio.h>

// For argument lists
#include <stdarg.h>


 enum debugEnabled {
    DEBUG_ENABLED_OFF = 0,
    DEBUG_ENABLED_ON = 1,
};
typedef enum debugEnabled debugEnabled_t;

debugEnabled_t debugOut(debugEnabled_t debugEnabled, const char * string, ... );


 enum logLevel {
    LOG_LEVEL_OFF = 0,
    LOG_LEVEL_ALWAYS = 1,
    LOG_LEVEL_DEBUG = 2,
};

typedef enum logLevel logLevel_t;

/**
 * @name: Log()
 * @param[in]:
 * @brief :
 */
void Log(logLevel_t logLevel, const char * string, ... );

#endif // _DEBUG_H_

