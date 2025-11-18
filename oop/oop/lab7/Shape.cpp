#include "Shape.h"
#include <iostream>

Shape::Shape() : background("default") {
    std::cout << "Shape created" << std::endl;
}

Shape::Shape(const std::string& background) : background(background) {
    std::cout << "Shape created with background: " << background << std::endl;
}

Shape::~Shape() {
    std::cout << "Shape destroyed" << std::endl;
}

std::string Shape::getBackground() const {
    return background;
}

void Shape::setBackground(const std::string& background) {
    this->background = background;
}

void Shape::draw() const {
    std::cout << "Drawing shape with background: " << background << std::endl;
}