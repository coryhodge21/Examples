/**
 * 
 */

#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdio.h>
 enum debugEnabled {
    OFF = 0,
    ON = 1,
};
typedef enum debugEnabled debugEnabled_t;

debugEnabled_t debugOut(char * string, debugEnabled_t debugEnabled);

#endif // _DEBUG_H_

