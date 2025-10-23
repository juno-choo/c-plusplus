#include <iostream>
#include <compare> // <-- Required for std::strong_ordering

class Length {
public:
    Length(int v) : value(v) {}

    std::strong_ordering operator<=>(const Length& other) const {
        return value <=> other.value;
    }

private:
    int value;
};

int main() {
    Length len1{5};
    Length len2{10};

    if (len1 >= len2) {
        std::cout << "len1 is greater than or equal to len2" << std::endl;
    } else {
        std::cout << "len1 is less than len2" << std::endl;
    }

    return 0;
}