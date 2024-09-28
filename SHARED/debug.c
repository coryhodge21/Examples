#include "debug.h"

debugEnabled_t debugOut(debugEnabled_t debugEnabled, const char * string, ... )
{

    if (debugEnabled == DEBUG_ENABLED_OFF)
    {
        return debugEnabled;
    }

    // Declare variable to hold the arguments list
    va_list args;

    // Initialize the argument list
    va_start(args, string);

    // vprintf
    vprintf(string, args);

    // Clean argument list
    va_end(args);

    // return suceess
    return debugEnabled;
};

/**
 * @name: Log()
 * @param[in]:
 * @brief :
 */
void Log(logLevel_t logLevel, const char * string, ... )
{
    // If logging disabled, return
    if(logLevel == LOG_LEVEL_OFF)
    {
        return;
    }

    // Declare pointer to the arguments list
    va_list args;

    // Initialize the argument list
    va_start(args, string);

    // vprintf
    vprintf(string, args);

    // Clean argument list
    va_end(args);
}