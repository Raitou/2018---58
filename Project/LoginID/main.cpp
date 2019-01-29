#include "stdAfx.h"

int main() {
	start();

}

void start(){
	
	uiMsg();
	//Define login as Login String
	std::string loginString;
	
	//Initialize Struct login
	sloginString loginStruct;
	
	SetConsoleTitle("Programming 2 Midterm Project");
	printf("Login (0-2018-AAA12-BBB34-CCC56-DDD78): ");
	
	//This is just a login but this has a not that complicated algorithm...
	std::cin.ignore();
	std::getline(std::cin, loginString);
	if(userLogin(loginString, loginStruct) == 1 && keyIntegrity(loginStruct.loginUKey) == 1){
		printf("Login Success!!");
		printInfo(loginStruct);
		YorN();
	} else {
		printf("Login Failed...");
		YorN();
	}
	
	printf("\n\n\n");
	system("pause");
}

void printInfo(sloginString &login){
	system("cls");
	printf("Year Registration: ");
	std::cout << login.yearReg << std::endl;
	printf("Admin Access: ");
	if(login.isAdmin){
		printf("True");
	} else {
		printf("False");
	}
	std::cout << std::endl;
	printf("UID: %d%d", login.loginUKey.uid1, login.loginUKey.uid2);
	
}

void uiMsg(){
    for(int n=0 ; n <= 3 ; n++){
    switch(n){
       
    case 0:
    case 2:
            for(int m=0 ; m != 25 ; m++){
                printf("=") ;
            }
            printf("\n") ;
            break ;
    case 1:
            printf("ID INTEGRITY CHECK SYSTEM\n") ;
            break ;
    }
}
   
    //change BG color to Grey
    system("COLOR 8f") ;
   
}

void YorN(){
    printf("\n\nDo you want to try again? (Y/N): ") ;
    char yorn ;
    std::cin >> yorn ;
        switch(yorn){
            case 'y':
            case 'Y':
                      system("cls") ;
                      start();
                      break ;
            case 'n':
            case 'N': exit(0) ;
                      break ;
            default: printf("Please enter 'Y' or 'N' only \n") ;
                     YorN();
                     break;
        }
}
