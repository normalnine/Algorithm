#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b - c << endl;

    int tmp = b;
    while (b > 0) 
    {
        b /= 10;
        a *= 10;
    }

    cout << a + tmp - c << endl;

    return 0;
}