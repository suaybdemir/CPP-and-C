#include <concepts>

//C++ 20

template<class T,class U>
concept Derived = std::is_base_of<U,T>::value;

class ABase {};
class ADerived : ABase {} ;

template <Derived<ABase> T>
class AClass
{
    T aMemberDerivedFromBase;
};


class AnotherClass
{

};

// int main(void)
// {
//     AClass <ADerived> aClass;
//     return 0;
// }

//C++ 11

template<typename T>
class YourClass
{
    YourClass()
    {
        static_assert(std::is_base_of<BaseClass,T>::value,"type parameter of this class must derive from BaseClass"),
    }
};