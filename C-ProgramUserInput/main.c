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

// Defines / Constants
#define FLAG_PREFIX_INDICATOR "--"

/*     PROGRAM BEGIN    */
int main(int argc, char ** argv)
{
    // printf("*********\n");
    // printf("* FLAGS *\n");
    // printf("--Flag=Value\n");
    // printf("*********\n");
    // printf("\n");

    // Check if any arguments passed
    for(int inputs = 0; inputs < argc; inputs++)
    {
        printf("inputs = %d\n",inputs);

        
        // skip program executable name
        if(inputs == 0)
        {
            continue;
        }

        printf("argv[%d]=%s\n",inputs, argv[inputs]);

        // If flag prefix found, parse flag,value pair
        if( strncmp(FLAG_PREFIX_INDICATOR, argv[inputs], 2) == 0)
        {
            printf("Flag Prefix Indicator Found\n");
        }

    }
};
#endif // _USER_INPUT_
