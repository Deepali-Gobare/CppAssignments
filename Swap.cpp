#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 21;
    cout << "Before swaping x:" << x << " y:" << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "Swaped value x:" << x << " y:" << y << endl;
}