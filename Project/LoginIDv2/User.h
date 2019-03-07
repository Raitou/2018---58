#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include "Security.h"

class User
{
	public:
		User();
		void Set(std::string&);
		void Print();
		bool Validate();
	private:
		std::string pKey;
};

#endif
