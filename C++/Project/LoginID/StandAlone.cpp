/***********************
Define needed libraries
and definitions here
***********************/

//Libraries
#include <iostream>
#include <string.h>
//end

//CONSTANTS!!!
const char alphaNum[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-";

/*********************
Write Prototype Here: 
*********************/

//Struct

struct sloginKey {
	std::string key1;
	std::string key2;
	std::string key3;
	std::string key4;
};

struct sloginString {
	bool isAdmin;
	int yearReg;
	sloginKey loginUKey;
};


//end

//Login System
int userLogin(std::string &loginString, sloginString &login);
bool userLoginStringFormatCheck(std::string &loginString, sloginString &login);

//Key Verify
int keyIntegrity(sloginKey &key);
bool keyVerify(sloginKey &key);

//Menu
void menuStudent();
void menuAdmin();
void printInfo(int &userID);

//end

int main() {
	//Define login as Login String
	std::string loginString;
	
	//Initialize Struct login
	sloginString loginStruct;
	printf("Login: ");
	
	//This is just a login but this has a not that complicated algorithm...
	std::getline(std::cin, loginString);
	if(userLogin(loginString, loginStruct) == 1 && keyIntegrity(loginStruct.loginUKey) == 1){
		printf("Login Success!!");
	} else {
		printf("Login Failed...");
	}
	
	printf("\n\n\n");
	system("pause");
	return 0;
}

int userLogin(std::string &loginString, sloginString &login){
	if(userLoginStringFormatCheck(loginString, login)){
		return 1;
	} else {
		return 0;
	}
}

bool userLoginStringFormatCheck(std::string &loginString, sloginString &login){
	
	//Temp String
	std::string x;
	
	//STEP 1: CHECK SIZE!
	if(strlen(loginString.c_str()) != 30){
		return false;
	}
	
	//STEP 2: CHECK ALPHABET!
	for(int i = 0; strlen(loginString.c_str()) > i; i++){
		bool hit = false;
		for(int j = 0; strlen(alphaNum) > j; j++){
			if(loginString[i] == alphaNum[j]){
				hit = true;
				break;
			} else {
				continue;
			}
		}
		if(!hit){
			return false;
		} else {
			continue;
		}
	}
	
	//STEP 3: CHECK FORMAT! JUST DASHES
	for(int i = 0; strlen(loginString.c_str()) > i; i++){
		switch(i){
			case 18:
			case 12:
			case 6:
			case 1:
				if(loginString[i] == 45){
					continue;
				} else {
					return false;
				}
			break;
			default:
				continue;
		}
	}
	
	//Start Checking dashes
	int pos = loginString.find("-") + 1;
	
	//STEP 4: isAdmin?
	if(loginString[0] == '1' || loginString[0] == '0'){
		x = loginString.substr(0,1);
		login.isAdmin = std::stoi(x);
	} else {
		return false;
	}
	
	//STEP 5: defineYearRegistration
	x = loginString.substr(pos, sizeof(int));
	for(int i = 0; strlen(x.c_str()) > i; i++){
		if(isdigit(x[i])){
			continue;
		} else {
			return false;
		}
	}
	
	//if Done
	if(std::stoi(x) >= 2014 && std::stoi(x) <= 2019){
		login.yearReg = std::stoi(x);
	} else {
		return false;
	} 

	//STEP 6: getUKey
	for(int i = 0; 4 > i; i++){
		x = loginString.substr(pos);
		pos += (x.find("-") + 1);
		if(pos >= 0){
			x = loginString.substr(pos,5);
			for(int j = 0; strlen(x.c_str()) > j; j++){
				if(isalnum(x[j])){
					continue;
				} else {
					return false;
				}
			}
			switch(i){
				case 0:
					login.loginUKey.key1 = x;
					break;
				case 1:
					login.loginUKey.key2 = x;
					break;
				case 2:
					login.loginUKey.key3 = x;
					break;
				case 3:
					login.loginUKey.key4 = x;
					break;
				default:
					return false;
			}
		}
	}
	
	//IF ALL IS DONE RET TRUE!
	return true;
}

int keyIntegrity(sloginKey &key){
	if(keyVerify(key)){
		return 1;
	} else {
		return 0;
	}
}

bool keyVerify(sloginKey &key){
	//cmp key1, key2
	int x = 0; //Checking 1st Key Value
	int y = 0; //Checking 2nd Key Value
	for(int i = 0; strlen(key.key1.c_str()) > i; i++){
		x += (int)key.key1.c_str()[i];
	}
	
	if(x <= 240){
		return false;
	}
	
	for(int i = 0; strlen(key.key2.c_str()) > i; i++){
		y += (int)key.key2.c_str()[i];
	}
	
	printf("%d - %d", x, y);
	
	if(x != y){
	    return false;
	}
	
	if(strcmp(key.key1.c_str(), key.key2.c_str()) == 0){
		return false;
	}
	
	//cmp key3, key4
	x = 0;
	y = 0;
	for(int i = 0; strlen(key.key3.c_str()) > i; i++){
		x += (int)key.key3.c_str()[i];
	}
	
	if(x <= 240){
		return false;
	}
	
	if(
	strcmp(key.key1.c_str(), key.key3.c_str()) == 0 &&
	strcmp(key.key2.c_str(), key.key3.c_str()) == 0){
		return false;
	}
	
	for(int i = 0; strlen(key.key4.c_str()) > i; i++){
		y += (int)key.key4.c_str()[i];
	}
	
	if(x != y){
	    return false;
	}
	
	if(
	strcmp(key.key1.c_str(), key.key4.c_str()) == 0 &&
	strcmp(key.key2.c_str(), key.key4.c_str()) == 0 &&
	strcmp(key.key3.c_str(), key.key4.c_str()) == 0){
		return false;
	}
	
	return true;
}
