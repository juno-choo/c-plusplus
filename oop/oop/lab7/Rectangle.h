#include "Shape.h"

class Rectangle : public Shape {
private:
    int width;
    int height;
public:
    Rectangle();
    Rectangle(int width, int height, std::string background);

    // Methods
    int getArea() const;

    // Virtual method for polymorphism
    void draw() const override;
};