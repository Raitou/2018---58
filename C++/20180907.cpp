#include <iostream>
int a, b;
char name[64];
int main(){
	std::cout << "Enter your name: \n";
	std::cin.getline(name, 64);
	std::cout << "Enter 20 Numbers: \n";
	for(int i = 0; i < 20; i++){
		std::cin >> a;
		b += a;
	}
	std::cout << "The sum of the 20 numbers you enter: " << b << std::endl;
	std::cout << "Hello! " << name << std::endl;	
	system("pause");
}
