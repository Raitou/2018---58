/***********************
Define needed libraries
and definitions here
***********************/

//Libraries
#include <iostream>
#include <string>
#include <windows.h>

//Definitions
#define BUFFER_SIZE 64
#define LOGIN_LENGTH 30 //0-2018-ABC12-345DE-FGH678-90IJK-LMNOP

//end

//CONSTANTS!!!
const char alphaNum[] = "ABCDGHIJKLMNOPQRSTVWXYZ0123456789-";

/*********************
Write Prototype Here:
*********************/

//Struct

struct sloginKey {
	std::string key1;
	std::string key2;
	std::string key3;
	std::string key4;
	std::string key5;
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

//Encryption-Decryption Method
void keyDecrypt(std::string &encryptedKey);
void keyEncrypt(std::string &decryptedKey);

//Menu
void menuStudent();
void menuAdmin();
void printInfo(int &userID);

//end
