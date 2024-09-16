#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch[100];
    cout << "Enter a string: ";
    cin.getline(ch, 100);

    for (int i = 0; i < strlen(ch); i++)
    {
        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z') ||
            (ch[i] >= '0' && ch[i] <= '9') || ch[i] == ' ')
        {
            cout << ch[i];
        }
    }

    cout << endl;
    return 0;
}
