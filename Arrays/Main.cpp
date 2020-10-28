
#include <iostream>

#define LOG(x) std::cout << x << std::endl
int main()
{
	// Array declaration
	int test[5]; 
	test[0] = 1;

	LOG("Array memory address, array is a pointer");
	int* ptr = test;
	LOG(test);
	LOG(test[0]);

	LOG("==============================================");
	LOG(*ptr);

	LOG("==============================================");
	int* marray = new int[5];

	marray[1] = 12;

	LOG(*marray);
	delete[]  marray;
}