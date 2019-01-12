#include "stdAfx.h"

int userLogin(std::string &loginString){
	//Test Data
	if(std::strcmp("0-2018-ABC12-345DE-FGH678-90IJK-LMNOP", loginString.c_str()) == 0){
		return 0;
	} else {
		return 1;
	}
	//end of test
	
	
}
