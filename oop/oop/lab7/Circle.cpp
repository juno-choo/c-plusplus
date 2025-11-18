#include "Circle.h"
#include <iostream>

Circle::Circle() : Shape("default"), radius(0) {
    std::cout << "Circle created" << std::endl;
}

Circle::Circle(float radius, std::string background) : Shape(background), radius(radius) {
    std::cout << "Circle created with radius: " << radius << std::endl;
}

float Circle::getArea() const {
    return 3.14 * radius * radius;
}

float Circle::getPerimeter() const {
    return 2 * 3.14 * radius;
}

void Circle::draw() const {
    std::cout << "Drawing circle with radius: " << radius << std::endl;
}