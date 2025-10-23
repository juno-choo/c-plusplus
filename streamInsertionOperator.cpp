#include <iostream>

class Length
{
private:
    int value;  
public:
    Length() = default;
    Length(int v) : value(v) {}
    Length(const Length& other) : value(other.value) {}
    int getValue() const { return value; }
    void setValue(int v) { value = v; }
};

std::ostream& operator<<(std::ostream& os, const Length& len)
{
    os << len.getValue();
    return os;
}

std::istream& operator>>(std::istream& is, Length& len)
{
    int value;
    is >> value;
    len.setValue(value);
    return is;
}   

int main()
{
    Length len1;
    Length len2;

    std::cout << "Enter length 1: ";
    std::cin >> len1;
    std::cout << "Enter length 2: ";
    std::cin >> len2;

    std::cout << len1 << " " << len2 << std::endl;

    return 0;
}