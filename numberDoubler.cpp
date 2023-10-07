#include <iostream>

int main(){
	int inputValue = 0;
	//we have to create a variable for cin to change I believe
	
	std::cout << "Hello! Please input an integer.\n";
	//instructs user what to do
	
	std::cin >> inputValue;
	//this will work for numbers that aren't too large.
	
	std::cout << "Your number doubled is " << inputValue*2 << "!\n\n";
	//output the doubled number
	
	std::cout << "Not sure what else you want me to do.";
	return 0;
}
