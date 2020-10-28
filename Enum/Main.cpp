#include <iostream>

enum Days
{
	Saturday, Sunday, Monday
	// Saturday = 0, Sunday = 1, Monday = 2 ...
	// Saturday = 5, subsequentes serao ascendentes
};

int main()
{
	Days value = Saturday;

	if (value == 0)
	{
		std::cout << "Saturday 0" << std::endl;
	}
}