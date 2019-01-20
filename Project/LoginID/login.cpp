#include "stdAfx.h"

int userLogin(std::string &loginString, sloginString &login){
	//Test Data
	/*if(std::strcmp("0-2018-ABC12-345DZ-YG678-90IJK-LMNOP", loginString.c_str()) == 0){
		return 0;
	} else {
		return 1;
	}*/
	//end of test
	
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
	if(strlen(loginString.c_str()) != 36){
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
			case 24:
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
	for(int i = 0; 5 > i; i++){
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
				case 4:
					login.loginUKey.key5 = x;
					break;
				default:
					return false;
			}
		}
	}
	
	//IF ALL IS DONE RET TRUE!
	return true;
}

