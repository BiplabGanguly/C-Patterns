#include <bits/stdc++.h>
using namespace std;

/*
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
 */

int main()
{
    int checkval = 1;
    for (int i = 1; i <= 9; i++)
    {
        if (i > 5)
        {
            for (int k = 1; k < i - checkval; k++)
            {
                cout << "*";
            }
            checkval+=2;
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}
