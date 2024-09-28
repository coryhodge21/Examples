#include <stdio.h>  // for printf

#include "localHeader.h"
#include "../SHARED/debug.h"

int main(int argc, char ** argv)
{
    printf("Example Makefile\n");

    int input = 0;
    input = localHeaderFx(input);
    printf("localHeaderFx=%d\n", input);

    debugOut("Using Shared Lib File\n", ON);

    return 0;
}