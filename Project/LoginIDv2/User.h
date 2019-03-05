#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <string>
#include "Security.h"

class User : public Security
{
	public:
		User();
		void Set(std::string&);
		void Print();
		bool Validate();
	private:
		std::string pKey;
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
};

#endif
