#include <iostream>

int g{1};
int f() { return 2; }

template <typename T>
struct Base {

	int g{3};
	int f() const { return 4; }
};

template <typename T>
struct Der: Base <T>
{

	void foo() const
	{
		std::cout<<g<<f();
	}
};

int main(void)
{
	Der<int> der;
	der.foo();
	return 0;
}
