#include <iostream>

void erase(int *array, int &size, int &index){
	int *temp = new int[size];
	for(int i = 0; size > i; i++){
		if(index == i){
			temp[i] = SHRT_MIN;
		}
		temp[i] = array[i];
	}
	
	//we cant use this 
	//(due to the fact if we delete temp it will point to an invalid memory)
	//array = temp
	
	//so we will use this instead
	for(int i = 0; size > i; i++){
		array[i] = temp[i];
	}
	
	//delete temp array (memory safe!)
	delete[] temp;
}

bool isDuplicate(int *array, int &size, int &input){
	bool hit = false;	
	
	//cleanup and check
	for(int i = 0; size > i; i++){
		if(input == array[i]){
			erase(array, size, i);
			hit = true;
		}
	}
	
	return hit;
}

int main(){
	int n, m;
	std::cin >> n >> m;
	int *j = new int[n];
	
	//step 1: input array j
	for(int i = 0; n > i; i++){
		std::cin >> j[i];
	}
	
	int *k = new int[(n < m ? n : m)];
	
	//removing trash data
	for(int i = 0; (n < m ? n : m) > i; i++){
		k[i] = SHRT_MIN;
	}
	
	//step 2: input and check dups
	int input;
	int index = 0, count = 0;
	while(true){
		
		if(count >= m){
			break;
		}
		
		std::cin >> input;
		
		if(isDuplicate(j, n, input)){
			k[index] = input;
			index++;
		}		
		
		count++;
	}
	
	for(int i = 0; (n < m ? n : m) > i; i++){
		if(k[0] == SHRT_MIN){
			std::cout << "NONE!";
			break;
		}
		if(k[i] == SHRT_MIN){
			break;	
		}
		std::cout << k[i] << " ";
	}
	
	//cleanup memory
	delete[] j, k;
	
}
