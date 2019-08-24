/***********************
Define needed libraries
and definitions here
***********************/

//Libraries
#include <iostream>
#include <string>
#include <ostream>
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
	int uid1;
	int uid2;
};

struct sloginString {
	bool isAdmin;
	int yearReg;
	sloginKey loginUKey;
};

//end

//UI MESSAGES
void uiMsg();
void YorN();
void start();

//Login System
int userLogin(std::string &loginString, sloginString &login);
bool userLoginStringFormatCheck(std::string &loginString, sloginString &login);

//Key Verify
int keyIntegrity(sloginKey &key);
bool keyVerify(sloginKey &key);

//Menu
void menuStudent(sloginString &login);
void menuAdmin(sloginString &login);
void printInfo(sloginString &login);

//end
