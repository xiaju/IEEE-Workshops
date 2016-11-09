#include <iostream>

/* Make new function to perform calculations*/

int add_two_numbers (int x, int y)
{
	int z;
	z=x+y;
	return z;
}

int main()
{
	std::cout<<add_two_numbers(3,4)<<std::endl;
	return 0;
}