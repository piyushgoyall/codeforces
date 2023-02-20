#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if (a < b && a < c && a < d)
        {
            count = 3;
        }
        else if (a < b && a > c && a > d || a < c && a > b && a > d || a < d && a > c && a > b)
        {
            count = 1;
        }
        else if (a > b && a > c && a > d)
        {
            count = 0;
        }
        else
        {
            count = 2;
        }
        cout << count << endl;
    }
    return 0;
}