#include <iostream>
#include <string>
#include "Shape.h"

class Circle : public Shape {
private:
    float radius;
public:
    Circle();
    Circle(float radius, std::string background);

    // Methods
    float getArea() const;
    float getPerimeter() const;

    // Virtual method for polymorphism
    void draw() const override;
};