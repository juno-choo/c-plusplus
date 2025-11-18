#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : Shape(), width(0), height(0) {
    std::cout << "Rectangle created" << std::endl;
}

Rectangle::Rectangle(int width, int height, std::string background) : Shape(background), width(width), height(height) {
    std::cout << "Rectangle created with width: " << width << " and height: " << height << std::endl;
}

int Rectangle::getArea() const {
    return width * height;
}

// Override the draw method from Shape
void Rectangle::draw() const {
    std::cout << "Drawing rectangle with width: " << width << " and height: " << height << std::endl;
}