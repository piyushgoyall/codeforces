#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        if (a <= b)
        {
            a *= 3;
            b *= 2;
        }
        else if (a > b)
        {
            cout << i - 1;
            break;
        }
    }
    return 0;
}