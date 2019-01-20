#include "stdAfx.h"

int main() {
	//Define login as Login String
	std::string loginString;
	
	//Initialize Struct login
	sloginString loginStruct;
	
	SetConsoleTitle("Programming 2 Midterm Project");
	printf("Login: ");
	
	//This is just a login but this has a not that complicated algorithm...
	std::getline(std::cin, loginString);
	if(userLogin(loginString, loginStruct) && keyIntegrity(loginStruct.loginUKey)){
		printf("Login Success!!");
	} else {
		printf("Login Failed...");
	}
	
	printf("\n\n\n");
	system("pause");
	return 0;
}
