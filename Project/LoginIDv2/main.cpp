#include <iostream>
#include <string>
#include "pKey.h"

using namespace AdvancedConsole;

int main(){
	std::string key;
	
	//Intialize pKey Library	
	pKey init;
	
	std::cout << Color(AC_MAGENTA) << "Login: " << Color(AC_DEFAULT);
	std::cin >> key;
	
	init.Set(key); //setting pKey
	if(init.Validate()){
		std::cout << "Test";
	}
	
	//init.Print(); //test
	return 0;
}
