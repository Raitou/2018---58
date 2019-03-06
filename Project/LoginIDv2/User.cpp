#include "User.h"

User::User()
{
	return;
}

void User::Set(std::string &x)
{
	pKey = x;
}

void User::Print(){
	std::cout << pKey;
}

bool User::Validate(){
	if(pKey == ""){
		return false;
	}
	if(!formatCheck(pKey)){
		return false;
	}
	if(!keyVerify()){
		return false;
	}
	return true;
}
