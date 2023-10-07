#include <iostream>

int main(){
	int inputValue = 0;
    std::cout << "Hello! Please input an integer.\n";
	std::cin >> inputValue;
	std::cout << "Your number doubled is " << inputValue*2 << "!\n\n";
	std::cout << "Not sure what else you want me to do.";
	return 0;
}