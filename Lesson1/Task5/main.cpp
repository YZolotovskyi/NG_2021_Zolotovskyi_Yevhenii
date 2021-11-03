#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{   double mass;
    cout << "enter the mass of the ship" << endl;
    cin >> mass;
    mass = mass/3;
    mass = ceil (mass);
    mass = mass - 2;
    mass = mass * 300;
    cout << "You need to ";
    cout << ( mass );
    cout << " fuel" << endl;
    return 0;
}
