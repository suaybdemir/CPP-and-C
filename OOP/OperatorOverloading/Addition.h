#ifndef ADDITION_H
#define ADDITION_H


class Addition; // Forward declaration

class Addition {
private:
    int real;
    int imaginary;
public:
    Addition(int r, int i);
    friend class Operation;
    int getReal() const;
    int getImaginary() const;
};

class Operation {
public:
    static int addRealPart(const Addition& a, const Addition& b);
    static int addImaginaryPart(const Addition& a, const Addition& b);
};


#endif //ADDITION_H