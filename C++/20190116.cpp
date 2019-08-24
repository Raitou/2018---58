#include <iostream>

void fibonacci(int &num, int &a, int &b){
	//printf("- %d -", num);
	if(num > 0){
		printf(" %d,", a);
		printf(" %d,", b);
		a+=b;
		b+=a;
		num-=2;
		fibonacci(num, a, b);
	} else {
		return;
	}
	
}

int main(){
	int terms, a, b;
	printf("Enter number of terms: ");
	std::cin >> terms;
	printf("Enter 1st Term: ");
	std::cin >> a;
	printf("Enter 2nd Term: ");
	std::cin >> b;
	printf("Fibonacci Sequence: ");
	fibonacci(terms, a ,b);
}
