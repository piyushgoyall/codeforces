#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s, temp;
        cin >> s;
        int curr = 0;
        if (s[0] == '1')
        {
            curr++;
        }
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                if (curr == 0)
                {
                    temp += "+";
                    curr++;
                }
                else
                {
                    temp += "-";
                    curr--;
                }
            }
            else
            {
                temp += "+";
            }
        }
        cout << temp << endl;
    }
}

****ANSWER ****

        Input 3 2 11 5 01101 5 10001

    Participant's output -
    +-++ ++ +-

             Jury's answer -
    +-++ ++ +-

             Checker comment
                 ok OK !(3 test cases)
