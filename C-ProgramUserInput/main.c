/**
 * @file : main.c
 * @author : Cory W. Hodge
 * @date : Sep 27, 2024
 * @brief : example taking input or build flags from user input or script
 */
#ifndef _USER_INPUT_
#define _USER_INPUT_

// for printf
#include <stdio.h> 
// for strings
#include <string.h>
// for debug out
#include "../SHARED/debug.h"
const debugEnabled_t debugToggle = ON;

// Defines / Constants
#define FLAG_PREFIX_INDICATOR "--"


// Forward Decleration of Help Function
void printHelp(void);

/*     PROGRAM BEGIN    */
int main(int argc, char ** argv)
{

    // If no Argumkents Passed (only exec name in argv),
    //  print out help info to user
    if(argc == 1)
    {
        printHelp();

        return 1;
    }

    // for arguments passed
    for(int inputs = 0; inputs < argc; inputs++)
    {
        // skip program executable name
        if(inputs == 0)
        {
            // display prog name
            printf("Exec %s with flags :\n", argv[inputs]);
            continue;
        }

        printf("argv[%d]=%s\n",inputs, argv[inputs]);

        // If flag prefix found, parse flag,value pair
        if( strncmp(FLAG_PREFIX_INDICATOR, argv[inputs], 2) == 0 )
        {
            debugOut("Flag Prefix Indicator Found\n", debugToggle);

            // Parse Out Flag
            

        }

    }

    return 0;
};

//
void printHelp(void)
{
    printf("*********\n");
    printf("* FLAGS *\n");
    printf("--Flag=Value\n");
    printf("--Exec=A : Execute Process A\n");
    printf("--Exec=B : Execute Process B\n");
    printf("--DEBUG=A : Set Debug Flag A\n");
    printf("--DEBUG=B : Set Debug Flag B\n");
    printf("*********\n");
    printf("\n");
}

#endif // _USER_INPUT_
