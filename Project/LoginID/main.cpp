#include "stdAfx.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	std::string loginString;
	
	SetConsoleTitle("Programming 2 Midterm Project");
	printf("Login: ");
	
	//This is just a login but this has complicated things running on background...
	std::getline(std::cin, loginString);
	if(userLogin(loginString) == 1){
		printf("Login Failed...");
	} else {
		printf("Login Success!!!");
	}
	
	printf("\n\n\n");
	system("pause");
	return 0;
}
