#include <iostream>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int count = 1;
    for (int i = 1; i <= s1.length(); i++)
    {
        if (s1[i] == s1[i - 1])
        {
            count++;
            if (count == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}
