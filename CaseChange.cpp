#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch[10];
    cin >> ch;

    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == tolower(ch[i]))
        {
            ch[i] = toupper(ch[i]);
        }
        else
        {
            ch[i] = tolower(ch[i]);
        }
    }
    cout << "The changed case of character " << ch << endl;
}