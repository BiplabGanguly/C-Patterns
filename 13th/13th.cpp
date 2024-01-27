#include <bits/stdc++.h>
using namespace std;

/*
1      1
12    21
123  321
12344321
*/

void pattern(int n)
{
    int sp = n * 2 - 2;
    for (int i = 1; i <= n; i++)
    {
        // 1st pattern
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int l = sp; l >= i; l--)
        {
            cout << " ";
        }
        // 2nd pattern
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        sp -= 1;
        cout << endl;
    }
}

int main()
{
    pattern(4);
    return 0;
}