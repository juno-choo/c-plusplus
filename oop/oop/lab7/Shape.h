// 1. "If not defined..."
// (SHAPE_H is a unique name you create for this file)
#ifndef SHAPE_H 

// 2. "...then define it."
// (This prevents this code from running a second time)
#define SHAPE_H
#include <iostream>
#include <string>

class Shape {
protected:
    std::string background;
public:
    // Constructors and destructors
    Shape();
    Shape(const std::string& background);
    virtual ~Shape();

    // Getters and setters
    std::string getBackground() const;
    void setBackground(const std::string& background);

    // Virtual method for polymorphism
    virtual void draw() const;
};

#endif