#include <iostream>
#include <compare> // <-- Required for std::strong_ordering
#include <string>

class Length {
public:
    Length(int v) : value(v) {}

    bool operator==(const Length& other) const {
        return value == other.value;
    }

    bool operator<(const Length& other) const {
        return value < other.value;
    }

private:
    int value;
};

