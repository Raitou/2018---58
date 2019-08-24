#include <iostream>

/*
Make this global variable so that
the value isn't limited to main only
and some etchy reasons too.
*/

int a, b, c, d, e, temp;
int check = 0;

/*
I still hate the reason of limiting us
not to use swap instead but hey we can
be clever to make the swap for ourselves
*/

int main(){
	/*
	Since we only want to call input only once we need
	to enter it inside an if statement.
	*/
	if(a == 0 || b == 0 || c == 0 || d == 0 || e == 0)
	{
		std::cin >> a >> b >> c >> d >> e;
	}
	//The good stuffs. How to swap 1o1
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	} if(b>c){
		temp = b;
		b = c;
		c = temp;
	} if(c>d){
		temp = c;
		c = d;
		d = temp;
	} if(d>e){
		temp = d;
		d = e;
		e = temp;
	}
	check++;
	/*
	No Loop Statements? No Problem
	we can just run again the whole
	code by calling main function.
	Once the check variable reaches
	a certain value we are done and
	lets print the results.
	*/
	if(check !=8) main();
	else{
		std::cout << a << " " << b << " " << c << " " << d << " " << e << std::endl;
		std::cout << e << " " << d << " " << c << " " << b << " " << a << std::endl;	
	}
}
