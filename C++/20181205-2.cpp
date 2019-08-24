#include <iostream>
#define MAX_COL 4
#define MAX_ROWS 3

int grade[MAX_ROWS][MAX_COL] = {
{ 77, 68, 86, 73 },
{ 96, 87, 89, 78 },
{ 70, 90, 86, 81 },
};

float average;
int highest;
int lowest;

int main(){
	//print 2d array
	printf("\t\t[0]\t[1]\t[2]\t[3]\n");
	for(int i = 0; MAX_ROWS > i; i++){
		printf("Student[%d]\t", i);
		for(int j = 0; MAX_COL > j; j++){
			printf("%d\t", grade[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//print average
	for(int i = 0; MAX_ROWS > i; i++){
		for(int j = 0; MAX_COL > j; j++){
			average += grade[i][j];
		}
		average/=MAX_COL;
		printf("The Average Grade for Student[%d]: %.*f\n", i, 2, average);
		average = 0;
	}
	
	//print highest and lowest
		//lowest
	for(int i = 0; MAX_ROWS > i; i++){
		for(int j = 0; MAX_COL > j; j++){
			int k;
			if((grade[i][j+1] > grade[i][j]) && k == 0){
				lowest = grade[i][j];
				k++;
			} else if((lowest > grade[i][j]) && k > 0){
				lowest = grade[i][j]; 
			}
		}
	}
		//highest
	for(int i = 0; MAX_ROWS > i; i++){
		for(int j = 0; MAX_COL > j; j++){
			int k;
			if((grade[i][j+1] > grade[i][j]) && k == 0){
				highest = grade[i][j];
				k++;
			} else if((grade[i][j]) > highest && k > 0){
				highest = grade[i][j]; 
			}
		}
	}
	
	printf("The highest grade among the table entry is: %d\n",highest);
	printf("The lowest grade among the table entry is: %d\n",lowest);
}

/* Explanation: The Grades of the student is hard coded, which can be seen in the globar var int grades.
I first print the table in the interface then calculate the average via two for loops which will accessed the
multi-dimensional array which is the integer grades. After that Printed there average per row, then calculate
the lowest and highest via another for loop. I don't know what kind of algorithm i used for it, but what i can say
is it's my own made algorithm.
*/
