#include <iostream>
#include <memory> 

// Tell the compiler this class uses a generic type T
template <typename T>
class ArrayNew {
private:
    std::unique_ptr<T[]> arr; 
    int size;

public:
    // Constructor
    ArrayNew(int s) : size(s) {
        // Allocate memory for T using make_unique
        // This automatically value-initializes T (0 for numbers, empty for strings)
        arr = std::make_unique<T[]>(size); 
        std::cout << "Constructor called" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    ArrayNew(const ArrayNew& other) : size(other.size) {
        // Allocate new memory for this object
        arr = std::make_unique<T[]>(size);

        // Copy elements from the other array
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
        std::cout << "Copy constructor called" << std::endl;
    }

    // No Destructor needed! unique_ptr handles T cleanup automatically.

    void print() {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    // Helper to set values (so we can test different types)
    void set(int index, T value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }
};

int main() {
    std::cout << "--- Integer Array ---" << std::endl;
    ArrayNew<int> intArr(5);
    intArr.set(3, 42);
    intArr.set(4, 99);
    intArr.print(); 
    // 0 0 0 42 99

    std::cout << "\n--- Double Array ---" << std::endl;
    ArrayNew<double> doubleArr(5);
    doubleArr.set(0, 3.14);
    doubleArr.set(1, 2.71);
    doubleArr.print(); 
    // 3.14 2.71 0 0 0

    // make_unique initializes strings to be empty "" automatically.
    std::cout << "\n--- String Array ---" << std::endl;
    ArrayNew<std::string> stringArr(3);
    stringArr.set(0, "Hello");
    stringArr.set(1, "World");
    stringArr.print(); 
    // Hello World

    std::cout << "\n--- Copy Constructor Test ---" << std::endl;
    ArrayNew<int> copiedArr = intArr;
    copiedArr.print(); 
    // 0 0 0 42 99

    ArrayNew<std::string> copiedStrArr = intArr;
    copiedStrArr.print(); 
    // Error: cannot convert int array to string array

    return 0;
}