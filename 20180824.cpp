#include <iostream>

using namespace std;

char name[64];
int a, b;

int main()
{
	cout << "Enter your name: ";
	cin.getline(name, 64);
	cout << "Enter your two integers: ";
	cin >> a >> b;
	cout << "The sum of " << a << " and " << b << " are: " << a+b << endl;
	cout << "The difference of " << a << " and " << b << " are: " << a-b << endl;
	cout << "The product of " << a << " and " << b << " are: " << a*b << endl;
	cout << "The quotient of " << a << " and " << b << " are: " << a/b << endl;
	cout << "Hello " << name << "!";
}
