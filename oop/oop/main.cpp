#include <iostream>
#include "Widget.cpp"  // Assuming Widget.cpp is in the same directory

int main() {
    TextBox tb{true};
    std::cout << tb.getText() << std::endl;
    return 0;
}