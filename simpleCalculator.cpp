#include <iostream>

enum{
	ADD = 0,
	SUB,
	MULT,
	DIV
};

float performCalculation(float a, float b, int operation){
	switch(operation){
		case SUB:
			return a-b;
			break;
		case MULT:
			return a*b;
			break;
		case DIV:
			return a/b;
			break;
		default:
			return a+b;//default is add
			break;
	}
}

int main(){
	float operation = ADD;//default operation
	
	float operand1 = 1;
	float operand2 = 1;
	
	std::cout << "Please input the operation you prefer.\n0-ADD\n1-SUB\n2-MULT\n3-DIV\n(The default is ADD.)\n";
	std::cin >> operation;
	
	std::cout << "Please enter in the first operand. Default is 1.\n";
	std::cin >> operand1;
	
	std::cout << "Please enter in the second operand. Default is 1.\n";
	std::cin >> operand2;
	
	std::cout << "The result of the operation performed is: " << performCalculation(operand1,operand2,operation);
	return 0;
}