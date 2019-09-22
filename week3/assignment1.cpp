#include <iostream>

static int BSS;
static int Data = 10;
static const int Rodata = 1;


int ff(int F){
	int Stack = F;
	std::cout << "Stack\t" << &Stack << std::endl;
	return Stack;
}



int main(){

	int* Heap = new int[2];
	Heap[1] = 1;
	Heap[2] = 5;

	std::cout << "Code\t" << (void*) main << std::endl;
	std::cout << "Rodata\t" << &Rodata << std::endl;
	std::cout << "Data\t" << &Data << std::endl;	
	std::cout << "BSS\t" << &BSS << std::endl;
	std::cout << "Heap\t" << &Heap << std::endl;

	ff(10);


	return 0;
}
