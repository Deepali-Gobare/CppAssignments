#include <iostream>
using namespace std;

int main()
{

    for (int i = 5; i <= 8; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        cout << "Fact of " << i << " is " << fact << endl;
    }
}