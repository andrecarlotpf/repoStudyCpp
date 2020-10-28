#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl


// Passing by reference, bcz do not copy the parameter passed to the function
void PrintaName(const std::string& name)
{
	LOG(name);
}

int main()
{
	const char* name = "Andre";

	char name2[6] = {'A','n','d','r','e',0} ;

	LOG(name);

	LOG(name2);

	// This is a const char*
	//std::string name3 = "Carlo";

	// Concatenate in one line
	std::string name3 = std::string("Carlo") + " Torres";

	// += Overloaded inside string class
	name3 += " Pontes";

	// Has function builtin
	LOG(name3);
	LOG(name3.size());

}