#include <iostream>

int main(){
  //Create method and prototype these functions below
}

void ifelseif(){
  char color;
	std::cin >> color;
	if(color == 'r' || color == 'R'){
		std::cout << "RED\n";
		
	}else if(a == 'g' || a == 'G'){
		std::cout << "GREEN\n";
		
	}else if(a == 'b' || a == 'B'){
		std::cout << "BLUE\n";
		
	}else{
		std::cout << "BLACK\n";

	}
	system("pause");
}

void temperatures(){
	int hi, low, temp;
	std::cout << "Enter High Temperature: ";
	std::cin >> hi;
		if(hi >= 90){
		std::cout << "Heat Warning\n";
	}
	std::cout << "Enter Low Temperature: ";
	std::cin >> low;
	if(low < 32){
		std::cout << "Freeze Warning\n"; 
	}
	if((temp = hi - low) > 40){
		std::cout << "Large Temperature Swing";
	}
}

void switchColor(){
	char color;
	std::cin >> color;
	switch(color){
		case 'r':
		case 'R':
			std::cout << "RED\n";
			break;
		case 'g':
		case 'G':
			std::cout << "GREEN\n";
			break;
		case 'b':
		case 'B':
			std::cout << "BLUE\n";
			break;
		default:
			std::cout << "BLACK\n";
	}
	system("pause");
}

void switchFlag(){
	int flag;
	std::cout << "Enter a number from 1 to 3: ";
	std::cin >> flag;
	switch(flag){
		case 1:
			std::cout << "HOT";
			break;
		case 2:
			std::cout << "LUKE WARM";
			break;
		case 3:
			std::cout << "COLD";
			break;
		default:
			std::cout << "OUT OF RANGE";
	}
}

//code of N01 - Raitou
