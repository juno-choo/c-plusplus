//
//  Point.cpp
//  oop
//
//  Created by Juno Choo on 10/30/25.
//

#include "Point.h"

// Constructor
Point::Point(int x, int y) : x(x), y(y) {}

// Equality
bool Point::operator==(const Point& other) const {
    return (this->x == other.x) && (this->y == other.y);
}
    
bool Point::operator!=(const Point& other) const {
    // Re-use operator==
    return !(*this == other);
}

// Comparison
bool Point::operator<(const Point& other) const {
    if (this->x < other.x) {
        return true;
    }
    if (this->x == other.x && this->y < other.y) {
        return true;
    }
    return false;
}

bool Point::operator>(const Point& other) const {
    return other < *this;
}

bool Point::operator>=(const Point& other) const {
    return !(*this < other);
}

bool Point::operator<=(const Point& other) const {
    return !(*this > other);
}

// Arithmetic
Point Point::operator+(int value) const {
    return Point(this->x + value, this->y + value);
}

Point& Point::operator+=(int value) {
    this->x += value;
    this->y += value;
    
    return *this;
}

// Insertion operator (friend function)
// Formats the output as (x, y)
std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}
