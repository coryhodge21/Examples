/**
 * 
 */
#ifndef _DEBUGGING_HPP_
#define _DEBUGGING_HPP_

#include <iostream>

class DebugCout {

    public:

        template <typename T>
        DebugCout& operator<<(const T& value)
        {
            #ifdef DEBUG
                std::cout << value;
            #endif // DEBUG
            return *this;
        }

        DebugCout& operator<<(std::ostream& (*manip)(std::ostream&)) {
        #ifdef DEBUG
            std::cout << manip;
        #endif
        return *this;
    }
};

#endif // _DEBUGGING_HPP_
