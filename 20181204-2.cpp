#include <iostream>

char answers[] = { 
'D', 'C', 'D', 'D', 'A',
'B', 'C', 'A', 'B', 'B',
'C', 'D', 'A', 'B', 'C',
'D', 'D', 'A', 'B', 'A',
'A', 'B', 'D', 'A', 'C'
};

int score = 0;
char input;

int main(){
	for(int i = 0; sizeof(answers) > i; i++){
		system("cls");
		printf("Question #%d Score: %d/%d\nAnswer: ", i+1, score, sizeof(answers));
		std::cin >> input;
		if(input == answers[i]){
			score++;
		}
		std::cin.ignore();
	}
	system("cls");
	printf("Your Score is %d/%d\n\n", score, sizeof(answers));
	if(score >= 15){
		printf("You passed the exam! Congratulations");
	} else{
		printf("You failed the exam! Please try again");
	}
}

/*
Explanation:
The Answers are Hard Coded in the char array
and will be checked by the if statement as seen in line 19;
*/
