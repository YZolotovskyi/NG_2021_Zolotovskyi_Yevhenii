#include <iostream>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "255.255.255.*" << endl;
    cout << "Please enter your number instead of * " << endl;
    cin >> a;
    switch(a) {
    case 255:
        cout << "number of available ip-addresses ";
        cout << "1";
        break;

    case 254:
        cout << "number of available ip-addresses ";
        cout << "2";
        break;

        case 252:
        cout << "number of available ip-addresses ";
        cout << "4";
        break;

    case 248:
        cout << "number of available ip-addresses ";
        cout << "8";
        break;

        case 240:
        cout << "number of available ip-addresses ";
        cout << "16";
        break;

    case 224:
        cout << "number of available ip-addresses ";
        cout << "32";
        break;

        case 192:
        cout << "number of available ip-addresses ";
        cout << "64";
        break;

    case 128:
        cout << "number of available ip-addresses ";
        cout << "128";
        break;

        case 000:
        cout << "number of available ip-addresses ";
        cout << "256";
        break;

    default:
        cout << "No roots" << endl;
    }
    return 0;
}
