#include <iostream>

int main(){
	int x;
	printf("Enter the Size of the Array (1-100): ");
	std::cin >> x;
	int array[128];
	//nullify the array with -1 assuming they dont input -1 
	for(int i = 0; 128 > i; i++){
		array[i] = SHRT_MIN;
	}
	
	for(int i = 0; x > i; i++){
		printf("Enter Value for Index %d: ", i);
		std::cin >> array[i];
	}
	
	int y = 0, z = 0;
	while(true){
		if(array[y+1] != SHRT_MIN){
			if(array[y] > array[y+1]){
				std::swap(array[y],array[y+1]);
				z++;
			}
		} else {
			z++;
		}
		if(z == 128){
			break;
		} else {
			y++;
		}
		if(y == x){
			y = 0;
		}
	}
	printf("Sorted Array from Least to Greatest: ");
	for(int i = 0; x > i; i++){
		std::cout << array[i] << " ";
	}
}

/* Explanation:
This code is fruit of sorting tests that I did from the past term starting from the variables throughout arrays.
What I did from this code is I test the next element if its greater than the 1st element which if the case is true
they will be swapped positions by the swap function. For stability of the array I defined the size of it to 128*(sizeof(int))
or 128 elements in order for the compiler to give space for this array other than being defined from the input. The heart of 
the algorithm is the bubble sort which what they called, but tbh I didn't know it was a bubble sort before a friend of mine
said that to me that what I used is bubble sorting. I have only one array of wherein i will put my values into it then the swap
will do the job from the while loop which is controlled by variable y and z. Variable Y controlled the index and Z controlled the
while(true) loop. */
