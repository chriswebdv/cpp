#include <iostream>

int main()
{
	
	int width = 5; // copy assignment of value 5 into variable width

	std::cout << width; // prints 5

	width = 7; // change value stored in variable width to 7

	std::cout << width; // prints 7

        // An integer can only hold non-fractional values
    // int w1 { 4.5 }; // compile error: list init does not allow narrowing conversion of 4.5 to 4
    // std::cout << w1;
    
    int w2 = 4.5;   // compiles: copy init initializes width with 4
    std::cout << w2;

    int w3(4.5);    // compiles: direct init initializes width with 4
    std::cout << w3;
	
    return 0;
}