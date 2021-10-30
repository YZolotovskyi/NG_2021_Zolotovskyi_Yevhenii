#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cin >> a;
    while (a > 0)
    {
        b += a % 10;
        a = a / 10;
    }
    cout << b << endl;
    return 0;
}
