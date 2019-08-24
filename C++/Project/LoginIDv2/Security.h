#ifndef SECURITY_H
#define SECURITY_H

#include <string>
#include <iostream>

class Security
{
	public:
		Security();
		bool keyVerify();
		void printInfo();
		bool formatCheck(std::string&);
	private:
		std::string key1;
		std::string key2;
		std::string key3;
		std::string key4;
		
		bool isAdmin;
		
		int yearReg;
		int keyVal1 = 0;
		int keyVal2 = 0;
		int uid1 = 0;
		int uid2 = 0;
		
		const std::string alphaNum = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-";
};

#endif
