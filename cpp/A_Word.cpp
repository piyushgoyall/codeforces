#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin >> s;
    int cl = 0;
    int cu = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cl = cl + 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cu = cu + 1;
        }
    }
    if (cu > cl)
    {
        cout << strupr(s) << endl;
    }
    else
    {
        cout << strlwr(s) << endl;
    }
    return 0;
}