#include <iostream>
#include <vector>
#include <memory> // Required for std::unique_ptr and std::make_unique

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

// Part 1: showShape() Demonstration
// Takes a Shape by *reference* to enable polymorphism.
// If you pass 'Shape s' by value, it causes "object slicing"
// and will only ever call Shape::draw().
void showShape(const Shape& s) {
    std::cout << "--- Calling showShape() ---" << std::endl;
    s.draw(); // This is a polymorphic call!
    std::cout << "---------------------------" << std::endl;
}

int main() {
    std::cout << "## Part 1: showShape() Demonstration ##" << std::endl;
    Rectangle rect1(7, 3, "blue");
    Circle circ1(4, "red");

    showShape(rect1); // Calls Rectangle::draw()
    showShape(circ1); // Calls Circle::draw()

    std::cout << "\n";

    // Part 2: Polymorphic Collection (Raw Pointers)
    std::cout << "## Part 2: Polymorphic Collection (Raw Pointers) ##" << std::endl;
    std::vector<Shape*> shapeVector;

    // Create objects on the heap and store pointers
    shapeVector.push_back(new Rectangle(5, 2, "green"));
    shapeVector.push_back(new Circle(3, "yellow"));

    // Loop and call draw() - this is dynamic binding
    for (const Shape* shapePtr : shapeVector) {
        shapePtr->draw();
    }

    // Must manually delete raw pointers to avoid memory leaks !!
    for (Shape* shapePtr : shapeVector) {
        delete shapePtr;
    }
    shapeVector.clear();

    std::cout << "\n";

    // Part 3: Rewrite using std::unique_ptr
    std::cout << "## Part 3: Polymorphic Collection (std::unique_ptr) ##" << std::endl;
    
    // This is the modern, safe C++ way.
    std::vector<std::unique_ptr<Shape>> smartShapeVector;

    // Use std::make_unique to create and store smart pointers
    // std::move() is needed because unique_ptr cannot be copied
    smartShapeVector.push_back(std::make_unique<Rectangle>(8, 4, "purple"));
    smartShapeVector.push_back(std::make_unique<Circle>(5, "orange"));

    for (const auto& shapeUPtr : smartShapeVector) {
        shapeUPtr->draw(); // Dynamic binding
    }

    return 0;
}