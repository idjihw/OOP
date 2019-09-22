#include <iostream>

int main(){
	
	char target[] = "Han wonhee";
	
	long b[447];

	int a = 17;
	int i = 3606;

	int *c = new int[402];
	
	char * copy = "is no no";
	char name = 'a';

	std::cout << &name+i << std::endl;

	std::cout << (int*) &name << std::endl;
        std::cout << &a << std::endl;
        std::cout << &i << std::endl;
        std::cout << &c << std::endl;
        std::cout << &copy << std::endl;
        std::cout << &b << std::endl;
	std::cout << &target << std::endl;


}



