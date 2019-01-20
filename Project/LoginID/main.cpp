#include "stdAfx.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Define login as Login String
	std::string loginString;
	
	//Initialize Struct login
	sloginString loginStruct;
	
	SetConsoleTitle("Programming 2 Midterm Project");
	printf("Login: ");
	
	//This is just a login but this has complicated things running on background...
	std::getline(std::cin, loginString);
	if(userLogin(loginString, loginStruct)){
		printf("Login Success!!!");
	} else {		
		printf("Login Failed...");
	}
	
	printf("\n\n\n");
	system("pause");
	return 0;
}
