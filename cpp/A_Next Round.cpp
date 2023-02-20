#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n], i, count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] > 0)
        {
            count = count + 1;
        }
    }
    cout << count << endl;
    return 0;
}
