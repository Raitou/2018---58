#include "stdAfx.h"

int keyIntegrity(sloginKey &key){
	if(keyVerify(key)){
		return 1;
	} else {
		return 0;
	}
}

bool keyVerify(sloginKey &key){
	//cmp key1, key2
	int x = 0; //Checking 1st Key Value
	int y = 0; //Checking 2nd Key Value
	for(int i = 0; strlen(key.key1.c_str()) > i; i++){
		x += (int)key.key1.c_str()[i];
	}
	
	if(x <= 240){
		return false;
	}
	
	for(int i = 0; strlen(key.key2.c_str()) > i; i++){
		y += (int)key.key2.c_str()[i];
	}
	
	if(x != y){
	    return false;
	}
	
	key.uid1 = x;
	
	if(strcmp(key.key1.c_str(), key.key2.c_str()) == 0){
		return false;
	}
	
	//cmp key3, key4
	x = 0;
	y = 0;
	for(int i = 0; strlen(key.key3.c_str()) > i; i++){
		x += (int)key.key3.c_str()[i];
	}
	
	if(x <= 240){
		return false;
	}
	
	if(
	strcmp(key.key1.c_str(), key.key3.c_str()) == 0 &&
	strcmp(key.key2.c_str(), key.key3.c_str()) == 0){
		return false;
	}
	
	for(int i = 0; strlen(key.key4.c_str()) > i; i++){
		y += (int)key.key4.c_str()[i];
	}
	
	if(x != y){
	    return false;
	}
	
	if(
	strcmp(key.key1.c_str(), key.key4.c_str()) == 0 &&
	strcmp(key.key2.c_str(), key.key4.c_str()) == 0 &&
	strcmp(key.key3.c_str(), key.key4.c_str()) == 0){
		return false;
	}
	
	key.uid2 = y;
	return true;
}
