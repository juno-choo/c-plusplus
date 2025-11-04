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

