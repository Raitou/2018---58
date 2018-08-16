/*
The Whole Code is this its slightly differet but as I said
the conditional methods are still the same.
*/
#include <iostream>

using namespace std;

int gcd(int a,int b); //This GCD Function receives 2 int arguements

int a, b; //Let A & B as integers (NO DECIMALS) Also a GLOBAL VARIABLE

int main() //Main Function
{
    cout << "Euclid's Algorithm of GCD Program" << endl;
    cout << "Enter First Number: ";
    cin >> ::a; //Get Input Value of A
    cout << "Enter Second Number: ";
    cin >> ::b; // Get Input Value of B
    gcd(a, b); //Call GCD Function which we will pass the a and b as its arguements
}

int gcd(int a, int b) //Not that fan of "goto"
{
    if(a == 0 || b == 0) //Condition if a or b is 0
    {
        if( a == 0) //If Int A holds the value of the modulus 0
        {
            cout << "The GCD of " << ::a << " and " << ::b << " is " << b; // Then outs the B value (i know its kind of different from original workflow)
        }              // I tried to literally copy its flow but idk it doesnt work
        else
        {
            cout << "The GCD of " << ::a << " and " << ::b << " is " << a; // Prints A instead of B
        }
        //cout << a << " " << b << endl; // Test Test Test
    }
    else // If neither a or b is 0
    {
        if(a > b) // in summary modulus who has a greater value and redo the function again.
        {
            a %= b;
            gcd(a, b);
            
        }
        else
        {
            b %= a;
            gcd(a, b);
        }
    }
}
