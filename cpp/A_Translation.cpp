#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3 = "";
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s2.length(); i++)
    {
        s3 = s2[i] + s3;
    }
    if (s3 == s1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
