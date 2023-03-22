#include <iostream>
using namespace std;

int main()
{
    int totalNumbers;
    cin >> totalNumbers;

    int maxNumber = 0;
    int sum = 0;

    for (int i = 0; i < totalNumbers; i++)
    {
        int number;
        cin >> number;
        if (i == 0 || number > maxNumber)
        {
            maxNumber = number;
        }

        sum += number;

    }

    if (sum - maxNumber == maxNumber)
    {
        cout << "Yes" << endl << "Sum = " << maxNumber;
    }
    else
    {
        cout << "No" << endl << "Diff = " << abs(maxNumber - (sum - maxNumber));
    }
}

