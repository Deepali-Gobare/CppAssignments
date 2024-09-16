#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int num, int &count)
{

    bool flag = false;
    if (num == 1)
    {
        flag = false;
    }
    if (num == 2)
    {
        flag = true;
    }
    for (int i = 2; i < num - 1; i++)

    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
        else
        {
            flag = true;
        }
    }
    if (flag)
    {
        count++;
        cout << num << endl;
    }
}

int main()
{
    int count = 1;
    int num = 0;
    while (count < 25)
    {
        isPrime(num, count);
        num++;
    }
}