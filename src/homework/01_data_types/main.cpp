//write include statements
#include<iostream>
#include "data_types.h"
//write namespace using statement for cout

//I need help with this, I am pretty sure I have the code correct but it isn't outputting anything.
int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;
	int result;
	result = multiply_numbers(num);
	std::cout<<result;
	int num1 = 4;
	result = multiply_numbers(num1);
	std::cout<<result;
	return 0;
}
