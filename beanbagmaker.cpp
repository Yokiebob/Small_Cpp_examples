#include <iostream>
#include <string>


int main(){
	std::string full_name;
	std::string favorite_color;
	std::string bean_bag_art = " _______\n| pret- |\n|   end |\n|_______|  \n";
	
	std::cout << "Please enter your full name: ";
	std::getline(std::cin, full_name);
	
	std::cout << "Please enter your favorite color:";
	std::getline(std::cin, favorite_color);
	
	std::cout << "Hello " + full_name + ". I have made a " + favorite_color + "bean bag for you!\n";
	
	std::cout << bean_bag_art;
	return 0;
}