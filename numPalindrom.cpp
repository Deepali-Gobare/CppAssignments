#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int dup;
    dup = num;
    int rev = 0;
    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == dup)
    {
        cout << "num is Palindrom" << endl;
    }
    else
    {
        cout << "Num is not Palindrom" << endl;
    }
}