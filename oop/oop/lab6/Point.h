//
//  Point.h
//  oop
//
//  Created by Juno Choo on 10/30/25.
//

#include <iostream>

class Point {
private:
    int x;
    int y;
    
public:
    // Constructor
    Point(int x = 0, int y = 0);
    
    // Equality
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    // Comparison
    bool operator>(const Point& other) const;
    bool operator<(const Point& other) const;
    bool operator>=(const Point& other) const;
    bool operator<=(const Point& other) const;

    // Arithmetic
    Point operator+(int value) const;
    Point& operator+=(int value);
    
    // Friend function for insertion operator
    // Needs access to private members x and y
    friend std::ostream& operator<<(std::ostream& out, const Point& p);
};


