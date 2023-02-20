#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char a = s[0];
        char b = s[2];
        int c = int(a) - 48;
        int d = int(b) - 48;
        cout << c + d << endl;
    }
}

****OR ****

#include <bits/stdc++.h>
   using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << (int(s[0]) - 48) + (int(s[2]) - 48) << endl;
    }
}