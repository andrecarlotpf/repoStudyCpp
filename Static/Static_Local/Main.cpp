#include <iostream>

void Print()
{
	static int x = 0;
	x++;
	std::cout << x << std::endl;
}

int x;

int main()
{
	std::cout << "Static variable inside function continues lifetime during whole execution" << std::endl;
	Print();
	Print();
	Print();
	Print();
	Print();
}