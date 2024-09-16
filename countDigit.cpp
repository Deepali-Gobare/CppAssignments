#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    int count = 0;
    int dup = num;
    while (num > 0)
    {
        int rem = num % 10;
        count++;
        num = num / 10;
    }
    cout << "The number of digits in the " << dup << " are " << count << endl;
}