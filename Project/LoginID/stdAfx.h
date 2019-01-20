/***********************
Define needed libraries
and definitions here
***********************/

//Libraries
#include <iostream>
#include <string>
#include <windows.h>
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

//Login Algo
std::string userRetLoginType(std::string &loginString);
std::string userRetLoginYear(std::string &loginString);
std::string userRetLoginKey(std::string &loginString);

//Key Verify
int keyIntegrity(sloginKey &key);
bool keyVerify(sloginKey &key);

//Menu
void menuStudent();
void menuAdmin();
void printInfo(int &userID);

//end
