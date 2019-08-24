#include <iostream>
#define MAX_ROWS 15
#define MAX_COLUMNS 5


int amplifier[MAX_ROWS][MAX_COLUMNS];
int volt;

int main(){
	//nullify 2d array with INT_MIN
	for(int x = 0; MAX_ROWS > x; x++){
		for(int y = 0; MAX_COLUMNS > y; y++){
			amplifier[x][y] = INT_MIN;	
		}
	}
	
	//ctrl variables
	int j = 0, k = 0, l = 0, w = 0, a = 0;
	for(int i = 0; 15 > i; i++){
		system("cls");
		printf("Enter Voltage %d/15: ", i+1);
		std::cin >> volt;
		if(volt < 60){
			amplifier[j][0] = volt;
			j++;		
		} else if(volt >= 60 && volt < 70){
			amplifier[k][1] = volt;
			k++;
		} else if(volt >= 70 && volt < 80){
			amplifier[l][2] = volt;
			l++;
		} else if(volt >= 80 && volt < 90){
			amplifier[w][3] = volt;
			w++;
		} else if (volt >= 90){
			amplifier[a][4] = volt;
			a++;
		}
		std::cin.ignore();		
	}
	system("cls");
	printf("~59\t60-69\t70-79\t80-89\t90~\n");
	for(int x = 0; MAX_ROWS > x; x++){
		for(int y = 0; MAX_COLUMNS > y; y++){
			if(amplifier[x][y] != INT_MIN){
				printf("%d\t", amplifier[x][y]);
			} else {
				printf("\t");
			}		
		}
		printf("\n");
	}
	
}

/*Explanation: This code is written to distribute the variable to a specific column which is less than 60, greater than 60
and so on. The input will be given by the user which will be distributed in the 2d array which will be printed later on after
15 tries.*/
