#include <iostream>
#include <conio.h>

#define MAX_ROWS 3
#define MAX_COLUMNS 3

int magicBox[MAX_ROWS][MAX_COLUMNS];

bool isValid(int &value){
	if(value > 0 && value < 10){
		return true;
	}
	return false;
}

bool isDuplicate(int &value){
	for(int i = 0; MAX_ROWS > i; i++){
		for(int j = 0; MAX_COLUMNS > j; j++){
			if(magicBox[i][j] == value){
				return true;
			}
		}
	}
	return false;
}

bool isMagicSquare(int &foo){
	for(int i = 0; 4 > i; i++){
		foo = 0;
		switch(i){
		case 0:
			//Diagonal -
			for(int i = 0; MAX_ROWS > i; i++){
				foo += magicBox[i][i];
			}
			//printf("%d : in diagonal(-)\n", foo);
			if(foo != 15){
				return false;
			}
		break;
		case 1:
			//Diagonal +
			for(int i = 0; MAX_ROWS > i; i++){
				for(int j = MAX_COLUMNS-1; 0 <= j; j--){
					foo += magicBox[i][j];
					break;
				}
			}
			//printf("%d : in diagonal(+)\n", foo);
			if(foo != 15){
				return false;
			}
		break;
		case 2:
			//Horizontal
			for(int i = 0; MAX_ROWS > i; i++){
				foo = 0;
				for(int j = 0; MAX_COLUMNS > j; j++){
					foo+= magicBox[i][j];
				}
				//printf("%d : in horizontal\n", foo);
				if(foo != 15){
					return false;
				}
			}
		break;
		case 3:
			//Vertical
			for(int i = 0; MAX_ROWS > i; i++){
				foo = 0;
				for(int j = 0; MAX_COLUMNS > j; j++){
					foo+= magicBox[j][i];
				}
				//printf("%d : in vertical\n", foo);
				if(foo != 15){
					return false;
				}
			}
		break;
		default:
			printf("How the FUCK YOU GET HERE!?\n");
		}
	}
	return true;
}


int main(){
	//null the array (Cause C++ doesnt have a trash)
	for(int i = 0; MAX_ROWS > i; i++){
		for(int j = 0; MAX_COLUMNS > i; i++){
			magicBox[i][j] = 0;
		}
	}
	//DEFINE THE FUCKING VARIABLES
	int foo;
	for(int i = 0; MAX_ROWS > i; i++){
		for(int j = 0; MAX_COLUMNS > j; j++){
			while(true){
				system("cls");
				printf("Enter a number for Index [%d][%d] (1 - 9): ", i, j);
				std::cin >> foo;
				if(isValid(foo)){
					if(isDuplicate(foo)){
						printf("%d is a duplicate number!\n", foo);
						continue;	
					} else {
						magicBox[i][j] = foo;	
						break;				
					}
				} else {
					printf("%d is not a valid number!\n", foo);
					continue;
				}
					
			}
		}
	}
	
	printf("\n");
	
	for(int i = 0; MAX_ROWS > i; i++){
		for(int j = 0; MAX_COLUMNS > j; j++){
			printf("%d ", magicBox[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	if(isMagicSquare(foo)){
		printf("IS A FRIGGIN MAGIX FUCKING SQUARE!\n");
	} else {
		printf("IS NOT A FUCKING MAGIX SQUARE!\n");
	}
}
