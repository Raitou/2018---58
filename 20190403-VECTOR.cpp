#include <iostream>
#include <vector>

bool isDuplicate(std::vector<int> &vect, int &input){
	int counter = 0;
	bool hit = false;	
	
	//cleanup and check
	for(int i = 0; vect.size() > i; i++){
		if(input == vect[i]){
			vect.erase(vect.begin()+i);
			hit = true;
		}
	}
	
	return hit;
}

int main(){
	int n, m;
	std::cin >> n >> m;
	std::vector<int> j(n, SHRT_MIN);
	
	//step 1: input array j
	for(int i = 0; j.size() > i; i++){
		std::cin >> j[i];
	}
	
	std::vector<int> k((n < m ? n : m), SHRT_MIN);
	//step 2: input and check dups
	int input;
	int index = 0, count = 0;
	while(true){
		
		if(count >= m){
			break;
		}
		
		std::cin >> input;
		
		if(isDuplicate(j, input)){
			k[index] = input;
			index++;
		}		
		
		count++;
	}
	
	for(int i = 0; k.size() > i; i++){
		if(k[0] == SHRT_MIN){
			std::cout << "NONE!";
			break;
		}
		if(k[i] == SHRT_MIN){
			std::cout << k[i];	
		}
	}
	
	//clean up vector afteruse
	k.clear();
	j.clear();
}
