#include <iostream>
#include <type_traits>
#include <concepts>
using namespace std;

/* C++ 20


template<typename T>
void func(T) = delete;

void func(int);

*/

//template<typename T>
//enable_if_t<is_same_v<T,int>> func(T);

//template<typename T>
//void func(T, enable_if_t<is_same_v<T,int>> *p = nullptr);

//template<typename T>
//void func(T, enable_if<is_same_v<T,int>> *p = nullptr);

//template <typename T,typename = enable_if_t<is_same_v<T,int>>
//void func(T);

void func(same_as<int> auto);

int main(void)
{
    func(12);
    return 0;
}