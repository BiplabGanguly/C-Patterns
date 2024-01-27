#include <bits/stdc++.h>
using namespace std;

/*
   A
  ABA
 ABCBA
ACBDCBA
*/

void pattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space.....
        for (int s = 0; s < n - i; s++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << char(65 + j);
        }
        // reverse.....
        if (i > 0)
        {
            for (int k = i - 1; k >= 0; k--)
            {
                cout << char(65 + k);
            }
        }
        cout << endl;
    }
}

int main()
{
    pattern(12);
    return 0;
}