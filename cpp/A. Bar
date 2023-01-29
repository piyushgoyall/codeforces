#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE" || s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE")
        {
            count = count + 1;
        }
        else if (isdigit(s[0]))
        {
            if (stoi(s) < 18)
            {
                count = count + 1;
            }
        }
    }
    cout << count;
    return 0;
}
