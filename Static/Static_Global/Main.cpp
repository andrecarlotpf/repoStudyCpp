#include <iostream>

#define LOG(x) std::cout << x << std::endl


extern int y;

// static keyword makes the linker only provides that declaration to the owner cpp file
// cant use variable x from OtherFile.cpp here

int main()
{
	LOG("extern keyword used to reference a external declaration");
	LOG(y);
	LOG("==============================================================");
	LOG("cant use variable x from OtherFile.cpp here because is declared as static");

}