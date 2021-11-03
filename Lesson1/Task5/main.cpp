#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{   double m;
    cout << "enter the mass of the ship"<< endl;
    cin >> m;
    m = m/3;
    m = ceil (m);
    m = m - 2;
    m = m * 300;
    cout << "You need to ";
    cout << ( m );
    cout <<" " "fuel"<< endl;
    return 0;
}
