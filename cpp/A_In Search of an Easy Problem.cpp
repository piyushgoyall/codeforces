#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], i, j, flag = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (j = 0; j < n; j++)
    {
        if (arr[j] == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
    return 0;
}