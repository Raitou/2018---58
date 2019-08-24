#include <iostream>

using namespace std;

int main () 
{
    int a, b, c; //Inputs A B C
    cin >> a >> b >> c;
    if(a < b){ /* A very Confusing even I got confused and alot of experimentations to get here */
        if(a > c) //Understand it bit by bit and u will get it XD
        swap(a, c);
    } else {
        if(b < c) swap(a, b);
        else swap(a, c);
    }
    if (c < b) swap (b, c);
    cout << a << endl << b << endl << c; // Prints out
}
