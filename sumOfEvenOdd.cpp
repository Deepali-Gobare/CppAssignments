#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum = evenSum + arr[i];
        }
        else
        {
            oddSum = oddSum + arr[i];
        }
    }
    cout << "Even Sum " << evenSum << endl;
    cout << "Odd sum " << oddSum << endl;
}