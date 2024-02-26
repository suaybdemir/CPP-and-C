#include <iostream>
#include "Addition.cpp"

Addition::Addition(int r, int i) : real(r), imaginary(i) {}

int Addition::getReal() const {
    return real;
}

int Addition::getImaginary() const {
    return imaginary;
}

// Implementation of Operation class methods

int Operation::addRealPart(const Addition& a, const Addition& b) {
    return a.real + b.real;
}

int Operation::addImaginaryPart(const Addition& a, const Addition& b) {
    return a.imaginary + b.imaginary;
}

// Main function

int main() {
    int real1, img1, real2, img2;

    // Input for the first complex number
    std::cout << "Enter real and imaginary part of the first complex number\n";
    std::cin >> real1 >> img1;

    // Input for the second complex number
    std::cout << "Enter real and imaginary part of the second complex number\n";
    std::cin >> real2 >> img2;

    // Create Complex objects
    Addition num1(real1, img1);
    Addition num2(real2, img2);

    // Calculate sum of real and imaginary parts using Operation class methods
    int sumReal = Operation::addRealPart(num1, num2);
    int sumImg = Operation::addImaginaryPart(num1, num2);

    // Display the result
    std::cout << "Sum of real and imaginary part is " << sumReal << "+i" << sumImg << std::endl;

    return 0;
}
