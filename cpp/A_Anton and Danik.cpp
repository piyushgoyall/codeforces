#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cA = 0, cD = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            cA = cA + 1;
        }
        else if (s[i] == 'D')
        {
            cD = cD + 1;
        }
    }
    if (cA > cD)
    {
        cout << "Anton";
    }
    else if (cD > cA)
    {
        cout << "Danik";
    }
    else if (cD == cA)
    {
        cout << "Friendship";
    }
    return 0;
}