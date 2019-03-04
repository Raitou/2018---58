#include "Security.h"

Security::Security()
{
	return;
}

bool Security::formatCheck(std::string &key){
	//Temp String
	std::string temp;
	
	//STEP 1: CHECK SIZE!
	if(key.length() != 30){
		return false;
	}
	
	//STEP 2: CHECK ALPHABET!
	for(int i = 0; key.length() > i; i++){
		bool hit = false;
		for(int j = 0; alphaNum.length() > j; j++){
			if(key[i] == alphaNum[j]){
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
	for(int i = 0; key.length() > i; i++){
		switch(i){
			case 18:
			case 12:
			case 6:
			case 1:
				if(key[i] == 45){
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
	int pos = key.find("-") + 1;
	
	
	
	
	return true;
}
