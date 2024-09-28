#include "debug.h"

debugEnabled_t debugOut(char * string, debugEnabled_t debugEnabled)
{
    if (debugEnabled == OFF)
    {
        return debugEnabled;
    }

    printf("%s", string);

    return debugEnabled;
};