#include "stdAfx.h"

struct sloginString {
	bool isAdmin;
	int yearReg;
	sloginKey loginUKey;
};

struct sloginKey {
	std::string key1;
	std::string key2;
	std::string key3;
	std::string key4;
	std::string key5;
};
