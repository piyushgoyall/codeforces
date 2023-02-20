#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, sum = 0, c2 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == 2)
            {
                c2 += 1;
            }
            sum += a;
        }
        if (sum % 2 == 1 || n % 2 == 1 && c2 == n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
