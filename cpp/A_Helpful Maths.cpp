#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            s1 = s1 + s[i];
        }
    }
    sort(s1.begin(), s1.end());
    string s2 = "";
    for (int i = 0; i < s1.length(); i++)
    {
        s2 = s2 + s1[i];
        if (i != s1.length() - 1)
        {
            s2 = s2 + "+";
        }
    }
    cout << s2;
    return 0;
}