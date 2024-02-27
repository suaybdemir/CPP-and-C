#include <iostream>
using namespace std;

class G;

class F {
private:
    int real, img;

public:
    F() : real(0), img(0) {}
    F(int r, int i) : real(r), img(i) {}
    int getReal() const {
        return real;
    }
    int getImg() const {
        return img;
    }
    friend F G::operator+(const F& obj1, const F& obj2); // Declare G::operator+ as friend
};

class G {
public:
    static F operator+(const F& obj1, const F& obj2); // Define G::operator+
};

F G::operator+(const F& obj1, const F& obj2) {
    F obj3;
    obj3.real = obj1.real + obj2.real;
    obj3.img = obj1.img + obj2.img;
    return obj3;
}

int main(void) {
    int r1, r2, i1, i2;

    cout << "Real: ";
    cin >> r1 >> r2;

    cout << "Img: ";
    cin >> i1 >> i2;

    F obj1(r1, i1);
    F obj2(r2, i2);

    F obj3 = G::operator+(obj1, obj2); // Call G::operator+

    cout << "Real: " << obj3.getReal() << " + i" << obj3.getImg() << endl;

    return 0;
}
