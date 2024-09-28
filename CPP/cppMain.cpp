/**
 * 
 */
#include <iostream>

#include "./Shared/debug.hpp"

int main(int argc, char ** argv)
{
    std::cout << "Hello World" << std::endl;

    int x = 10;
    DebugCout() << "Custom Output Fx " << x << std::endl;

}