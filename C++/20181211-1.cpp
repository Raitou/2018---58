/*
Author: Raitou
*/

#include <iostream>

//global variables
int balance = 200;
int dp, wb;
char ch, ag;

//functions
char choice(char *ch);
int deposit(int *dp);
int withdraw(int *wd);


int main(){
	printf("\t### BANK TRANSACTION ###\n\n");
	printf("[D]: Deposit (Maximum: $5000)\n");
	printf("[B]: Balance (Minimum: $20)\n");
	printf("[W]: Withdraw (Maximum: $2000)\n\n");
	printf("[E]: Exit\n\n");
	printf(">> ");
	std::cin >> ::ch;
	switch(choice(&::ch)){
		case 0:
			printf("Do you have other transaction? (Y/N): ");
			std::cin >> ::ag;
			if(ag == 'y' || ag == 'Y'){
				std::cin.ignore();
				system("cls");
				main();
			} else {
				std::cin.ignore();
				system("cls");
				printf("Thank you for banking with us!\n\n");
				return 0;
			}
			break;
		case 1:
			system("cls");
			printf("Thank you for banking with us!\n\n");
			return 0;
		default:
			system("cls");
			std::cin.ignore();
			main();
			break;
	}
}

char choice(char *ch){
	system("cls");
	switch(*ch){
		case 'D':
			printf("Enter Amount: $");
			std::cin >> dp;
			if(deposit(&dp) == 1){
				system("cls");
				printf("Transaction Unsuccessful\n\n");
			} else {
				system("cls");
				printf("You Deposited: $%d\n\n", ::dp);
				printf("Your New Balance is $%d\n\n", ::balance);
			}
			return 0;
		case 'd':
			printf("Enter Amount: $");
			std::cin >> dp;
			if(deposit(&dp) == 1){
				system("cls");
				printf("Transaction Unsuccessful\n\n");
			} else {
				system("cls");
				printf("You Deposited: $%d\n\n", ::dp);
				printf("Your New Balance is $%d\n\n", ::balance);
			}
			return 0;
			break;
		case 'B':
			printf("Your Balance is $%d\n\n", ::balance);
			return 0;
			break;
		case 'b':
			printf("Your Balance is $%d\n\n", ::balance);
			return 0;
			break;
		case 'W':
			printf("Enter Amount: $");
			std::cin >> wb;
			if(withdraw(&wb) == 1){
				system("cls");
				printf("Transaction Unsuccessful\n\n");
			} else {
				system("cls");
				printf("You Withdrawn: $%d\n\n", ::wb);
				printf("Your New Balance is $%d\n\n", ::balance);
			}
			return 0;
			break;
		case 'w':
			printf("Enter Amount: $");
			std::cin >> wb;
			if(withdraw(&wb) == 1){
				system("cls");
				printf("Transaction Unsuccessful\n\n");
			} else {
				system("cls");
				printf("You Withdrawn: $%d\n\n", ::wb);
				printf("Your New Balance is $%d\n\n", ::balance);
			}
			return 0;
			break;
		case 'E':
			return 1;
			break;
		case 'e':
			return 1;
			break;
		default:
			return -1;
			break;
	}
}

int deposit(int *dp){
	if(*dp > 0 && *dp <= 5000){
		balance+=*dp;
		return *dp;
	} else {
		return 1;
	}
}

int withdraw(int *wd){
	int mb = 20;
	if((*wd < balance && *wd <= 2000) && balance-*wd >= 20){
		balance-=*wd;
		return *wd;
	} else {
		return 1;
	}
}
