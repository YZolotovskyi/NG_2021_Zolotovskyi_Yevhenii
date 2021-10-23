#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Enter the number in front of the x square and press enter" << endl;
    cin >> a;
    cout << "Enter the number before x and press enter" << endl;
    cin >> b;
    cout << "Enter the third number and press enter" << endl;
    cin >> c;
    double d;
    d=(b*b)-(4*a*c);
    if (d>0){
       double x1,x2;
       x1=(-b+sqrt(d))/(2*a);
       x2=(-b-sqrt(d))/(2*a);
       cout << "Two roots: " << ((x1>x2)? x2: x1) << " " << ((x1>x2)? x1: x2);
    }
    else
       if (d==0){
          cout << " One root:" << " " << -b/(2*a) << endl;
       }
       else
           cout << " No roots" << endl;
    return 0;
}
