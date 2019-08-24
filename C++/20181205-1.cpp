#include <iostream>
#include <cmath>
#include <windows.h>

//resistance array
int resistance[] = {
18, 29, 41, 58, 83
};

//current array with size of 5
float current[5];

//power array with size of 5
float power[5];

//Cursor Manipulation
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	//print table
	printf("====================================\n");
	printf("|| Resistance || Current || Power ||\n");
	printf("||================================||\n");
	printf("||            ||         ||       ||\n");
	printf("||            ||         ||       ||\n");
	printf("||            ||         ||       ||\n");
	printf("||            ||         ||       ||\n");
	printf("||            ||         ||       ||\n");
	printf("====================================\n");
	
  //print resistance
	for(int i = 0; sizeof(resistance)/sizeof(resistance[0]) > i; i++){
		gotoxy(7, (3+i));
		printf("%d", resistance[i]);
	}
	
  //accept input for current and print output for power
	for(int i = 0; sizeof(resistance)/sizeof(resistance[0]) > i; i++){
		gotoxy(18, (3+i));
		std::cin >> current[i];
		power[i] = resistance[i] * pow(current[i], 2);
		gotoxy(27, (3+i));
		printf("%.*f", 2, power[i]);
		std::cin.ignore();
	}
	
	printf("\n\n\n\n");
	
}

/*
Explanation: What that code done is calculation the power that will be given from the Resistance List (Hardcoded list)
to be calculated with the User Input (Current) which is a float then output the answer (Power)
*/
