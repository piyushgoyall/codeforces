#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1 = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            {
                continue;
            }
            else
            {
                s1 = s1 + '.' + s[i];
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            {
                continue;
            }
            else
            {
                s1 = s1 + '.' + char(int((s[i])) + 32);
            }
        }
    }
    cout << s1 << endl;
    return 0;
}

// ****OR ****

#include <bits/stdc++.h>
   using namespace std;
int main()
{
    string s, s1 = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            {
                continue;
            }
            else
            {
                s1 = s1 + char(46) + s[i];
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            {
                continue;
            }
            else
            {
                s1 = s1 + char(46) + char(int((s[i])) + 32);
            }
        }
    }
    cout << s1 << endl;
    return 0;
}
