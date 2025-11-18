#include <iostream>

class Point {
private:
    int m_x;
    int m_y;

public:
    // Constructor
    Point(int x, int y) : m_x(x), m_y(y) {}

    // Getter for x-coordinate (needed for the method)
    int getX() const {
        return m_x;
    }

    // Getter for y-coordinate (not needed for this problem, but good practice)
    int getY() const {
        return m_y;
    }

    // --- TODO: Implement this method ---
    // It should return true if this point and the 'other' point
    // form a vertical line (i.e., they have the same x-coordinate).
    bool isVerticalWith(const Point& other) const {
        return this->m_x == other.m_x; 
    }
};

// --- Test Harness (Do not modify) ---
int main() {
    Point p1(5, 10);
    Point p2(5, 3); // Vertical with p1
    Point p3(2, 10); // Horizontal with p1
    Point p4(5, 10); // Same as p1

    // Test 1: Two different points, vertical
    std::cout << "Test 1 (p1, p2): " 
              << (p1.isVerticalWith(p2) ? "Vertical" : "Not Vertical") 
              << " (Expected: Vertical)" << std::endl;

    // Test 2: Two different points, not vertical
    std::cout << "Test 2 (p1, p3): " 
              << (p1.isVerticalWith(p3) ? "Vertical" : "Not Vertical") 
              << " (Expected: Not Vertical)" << std::endl;
              
    // Test 3: Check the other way
    std::cout << "Test 3 (p3, p1): " 
              << (p3.isVerticalWith(p1) ? "Vertical" : "Not Vertical") 
              << " (Expected: Not Vertical)" << std::endl;
              
    // Test 4: A point with itself
    std::cout << "Test 4 (p1, p1): " 
              << (p1.isVerticalWith(p1) ? "Vertical" : "Not Vertical") 
              << " (Expected: Vertical)" << std::endl;

    return 0;
}