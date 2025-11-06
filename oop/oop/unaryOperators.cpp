#include <iostream>

class SmartCounter {
private:
    int m_value;

public:
    // Constructor
    SmartCounter(int value) : m_value(value) {}

    // 1. TODO: Overload the dereference operator (*)
    // It should return the integer value held by the class.
    int operator*() const {
        return m_value;
    }

    // 2. TODO: Overload the pre-increment operator (e.g., ++counter)
    // It should increment m_value AND return a reference to this object.
    SmartCounter& operator++() {
        ++m_value;
        return *this;
    }

    // 3. TODO: Overload the post-decrement operator (e.g., counter--)
    // It should decrement m_value BUT return a copy of the object
    // *before* it was decremented.
    SmartCounter operator--(int) {
        SmartCounter temp = *this; // Make a copy of the current state
        --(this->m_value);                 // Decrement the current object's value
        return temp;               // Return the copy (pre-decrement state)
    }

    // 4. TODO: Overload the logical NOT operator (!)
    // It should return true if m_value is 0, false otherwise.
    bool operator!() const {
        return m_value == 0;
    }
};

// --- Main Function (Test Harness) ---
// DO NOT MODIFY MAIN
int main() {
    SmartCounter counter(5);

    // Test 1: Dereference operator
    std::cout << "Test 1: Value is " << *counter << " (Expected: 5)" << std::endl;

    // Test 2: Pre-increment operator
    ++counter;
    std::cout << "Test 2: Value after ++counter is " << *counter << " (Expected: 6)" << std::endl;

    // Test 3: Post-decrement operator
    // We get the value before the decrement
    int old_val = *(counter--);
    std::cout << "Test 3a: Value from counter-- is " << old_val << " (Expected: 6)" << std::endl;
    std::cout << "Test 3b: Value after counter-- is " << *counter << " (Expected: 5)" << std::endl;
    
    // Test 4: Logical NOT operator
    std::cout << "Test 4a: Is counter zero? " << (!counter ? "Yes" : "No") << " (Expected: No)" << std::endl;
    
    SmartCounter zero_counter(1);
    zero_counter--; // Should become 0
    std::cout << "Test 4b: Is zero_counter zero? " << (!zero_counter ? "Yes" : "No") << " (Expected: Yes)" << std::endl;

    return 0;
}