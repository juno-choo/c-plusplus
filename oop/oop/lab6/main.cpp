#include "Point.h"
#include <iostream>

int main()
{
    Point first{ 10, 20 };
    Point second{ 12, 21 };
    
    // Test case 1
    if (first == second) {
        std::cout << "equal" << std::endl;
    }
    else {
        std::cout << "not equal" << std::endl;
    }

    // Test case 2
    if (first < second) std::cout << "first is less than second" << std::endl;

    // Test case 3
    std::cout << "first: " << first << "," << "second: " << second << std::endl;

    // Test case 4
    std::cout << first + 50 << std::endl;
    second += 100;
    std::cout << second << std::endl;

    return 0;
}
