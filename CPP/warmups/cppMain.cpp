/**
 * 
 */
#include <iostream>

// For DebugCout()
#include "../../Shared/CPP/debug.hpp"

/**
 * 
 */
bool parseProgramInput(const int argc, const char ** argv);

/**
 * 
 */
int main(int argc, char ** argv)
{
    std::cout << "Warm Ups" << std::endl;

    // If argc >1 then arguments have been passed to the program
    //  argc=1 means noarguments and argv[0] is program exec name
    if(argc > 1)
    {
        // Cast agrv to const safe argv
        const char** const_argv = const_cast<const char**>(argv);
        parseProgramInput(argc, const_argv);
    }
    
}

/**
 * 
 */
bool parseProgramInput(const int argc, const char ** argv)
{
    // Only working with arguments passed

    // Local Copys of Program Input arguments Count
    //int localArgc = argc;

    // For Each argument passed
    for(int argIndex = 0; argIndex < argc; argIndex++)
    {
        std::cout << "Argv[" << argIndex << "]:" << argv[argIndex] << std::endl;
    }


    // No arguments passed
    return false;
}