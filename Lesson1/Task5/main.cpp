#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{   double m;
    int l;
    cout << "enter the mass of the ship"<< endl;
    cin >> m;
    cout <<"enter the distance in light years" << endl;
    cin >> l;
    m = m/3;
    m = ceil (m);
    m = m - 2;
    m = m * l;
    cout << "You need to" " ";
    cout << ( m );
    cout <<" " "fuel"<< endl;
    return 0;
}
