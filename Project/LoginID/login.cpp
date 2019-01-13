#include "stdAfx.h"

int userLogin(std::string &loginString){
	//Test Data
	/*if(std::strcmp("0-2018-ABC12-345DE-FG678-90IJK-LMNOP", loginString.c_str()) == 0){
		return 0;
	} else {
		return 1;
	}*/
	//end of test
	
	if(userLoginStringFormatCheck(loginString)){
		return 0;
	} else {
		return 1;
	}
}

bool userLoginStringFormatCheck(std::string &loginString){
	
	//STEP 1: CHECK SIZE!
	if(std::strlen(loginString.c_str()) != 36){
		return false;
		break;
	}
	
	//STEP 2: CHECK ALPHABET!
	for(int i = 0; std::strlen(loginString.c_str()) > i; i++){
		bool hit = false;
		for(int j = 0; std::strlen(alphaNum) > j; j++){
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
	
	//IF ALL IS DONE RET TRUE!
	return true;
}
