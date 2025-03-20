#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstdlib>

const int MAX_ARR = 100; // Assuming MAX_ARR is defined in defs.h

template <typename T>
class Array {
public:
    // Constructor
    Array();
    
    // Destructor
    ~Array();

    // Add an element
    void add(T element);

    // Overload [] operator
    T& operator[](int index);
    const T& operator[](int index) const;

    // Get array size
    int getSize() const;

    // Check if full
    bool isFull() const;

    // Overload << operator
    template <typename U>
    friend std::ostream& operator<<(std::ostream& out, const Array<U>& arr);

private:
    int size;
    T* elements;
};

// Constructor
template <typename T>
Array<T>::Array() {
    elements = new T[MAX_ARR];
    size = 0;
}

// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] elements;
}

// Add an element to the array
template <typename T>
void Array<T>::add(T element) {
    if (size >= MAX_ARR) return;
    elements[size++] = element;
}

// Overload [] operator for non-const objects
template <typename T>
T& Array<T>::operator[](int index) {
    if (index < 0 || index >= size) {
        std::cerr << "Array index out of bounds" << std::endl;
        exit(1);
    }
    return elements[index];
}

// Overload [] operator for const objects
template <typename T>
const T& Array<T>::operator[](int index) const {
    if (index < 0 || index >= size) {
        std::cerr << "Array index out of bounds" << std::endl;
        exit(1);
    }
    return elements[index];
}

// Get array size
template <typename T>
int Array<T>::getSize() const {
    return size;
}

// Check if full
template <typename T>
bool Array<T>::isFull() const {
    return size >= MAX_ARR;
}

// Overload << operator
template <typename U>
std::ostream& operator<<(std::ostream& out, const Array<U>& arr) {
    out << "[ ";
    for (int i = 0; i < arr.size; i++) {
        out << arr.elements[i] << " ";
    }
    out << "]";
    return out;
}

#endif
