#include <iostream>

using namespace std;

int main () 
{
    int x, y, z;
    cin >> x >> y >> z;
    if(x < y){
        if(x > z)
        swap(x, z);
    } else {
        if(y < z) swap(x, y);
        else swap(x, z);
    }
    if (z < y) swap (y, z);
    cout << x << endl << y << endl << z;
}
