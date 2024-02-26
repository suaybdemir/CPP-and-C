#include <iostream>

class Addition;

class Operation {
public:
    // Declaration of friend functions to access private members of Addition class
    friend class Addition;

    // Method to add real parts of two complex numbers
    static int addRealPart(const Addition& obj1, const Addition& obj2);

    // Method to add imaginary parts of two complex numbers
    static int addImaginaryPart(const Addition& obj1, const Addition& obj2);
};

class Addition {
private:
    int real;
    int img;

public:
    // Constructor
    Addition(int real = 0, int img = 0) : real(real), img(img) {}

    // Getter and setter methods
    int getReal() const { return real; }
    int getImg() const { return img; }

    // Friend class declaration
    friend class Operation;
};

// Method definition to add real parts of two complex numbers
int Operation::addRealPart(const Addition& obj1, const Addition& obj2) {
    return obj1.real + obj2.real;
}

// Method definition to add imaginary parts of two complex numbers
int Operation::addImaginaryPart(const Addition& obj1, const Addition& obj2) {
    return obj1.img + obj2.img;
}

int main() {
    int real1, img1, real2, img2;

    // Input for the first complex number
    std::cout << "Enter real and imaginary part of the first complex number" << std::endl;
    std::cin >> real1 >> img1;

    // Input for the second complex number
    std::cout << "Enter real and imaginary part of the second complex number" << std::endl;
    std::cin >> real2 >> img2;

    // Creating objects for the complex numbers
    Addition num1(real1, img1);
    Addition num2(real2, img2);

    // Calling methods from Operation class to perform addition
    int sumReal = Operation::addRealPart(num1, num2);
    int sumImg = Operation::addImaginaryPart(num1, num2);

    // Displaying the sum
    std::cout << "Sum of real and imaginary part is " << sumReal << "+i" << sumImg << std::endl;

    return 0;
}
