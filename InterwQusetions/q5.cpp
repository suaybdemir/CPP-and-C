#include <iostream>
#include <vector>
using namespace std;

void f1(vector<int&&>);

void f2(auto &&);

templaye <typename T>
void f3(const T&&);


template <typename T>
class Nec{
    public:
        void f4(T&&);

        template <typename U>
        void f5(U&&);
};


template <typename T>
void f6(vector<T&&>);


template <typename C>
void f7(typename:: C::value_type &&);


/*


which are universal reference?

answer 2,4,5


*/