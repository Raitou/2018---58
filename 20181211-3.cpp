#include <iostream>

int ncases;
int pbar;
int oe;
float sga, earn;

void earnings(int pbar, int ncases);

int main(){
	printf("How many cases sold? ");
	std::cin >> ncases;
	printf("How much is the bar price? P");
	std::cin >> pbar;
	earnings(pbar, ncases);
}

void earnings(int pbar, int ncases){
	for(int i = 0; ncases > i; i++){
		oe = oe+((pbar*12)-100);
	}
	sga = oe*.1;
	earn = oe-sga;
	printf("\n\n");
	printf("SGA Share: P%.*f\n", 2, sga);
	printf("Overall Earnings: P%.*f\n", 2, earn);
}
