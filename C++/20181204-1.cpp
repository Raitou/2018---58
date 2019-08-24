#include <iostream>
#define MAX_INT 20

char integer[MAX_INT];

int main(){
	//null the array
	int i;
	for(i = 0; MAX_INT > i; i++ ){
		integer[i] = '\0';
	}
	printf("Enter a 20 Digit Number: ");
	scanf("%s", integer);
	
	//reversed print with ignore 0
	for(int j = i; 0 <= j; j--){
		if(integer[j] != 0){
			if(integer[j] != 48){
				printf("%c", integer[j]);
			}		
		}	
	}
}
/*
Explanation of Algorithm:
This code receives input from user as seen in line 13
and reversed only just the print of the inputted number
*/
