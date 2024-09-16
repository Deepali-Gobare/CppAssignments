#include <iostream>
using namespace std;

template <class T>
void swapVal(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cin >> x >> y;

    char ch1, ch2;

    cin >> ch1 >> ch2;

    cout << "Befor swaping x:" << x << " y:" << y << endl;
    swapVal(x, y);
    cout << "After swaping x:" << x << " y:" << y << endl;

    cout << "Befor swaping ch1:" << ch1 << " ch2:" << ch2 << endl;
    swapVal(ch1, ch2);
    cout << "After swaping ch1:" << ch1 << " ch2:" << ch2 << endl;
}