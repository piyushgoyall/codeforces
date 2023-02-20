#include <bits/stdc++.h>
using namespace std;

void reduceFraction(int x, int y)
{
    int d;
    d = __gcd(x, y);

    x = x / d;
    y = y / d;

    cout << x << "/" << y;
}

int main()
{
    int Y, W;
    cin >> Y >> W;
    int temp = max(Y, W);
    int num = (6 - temp) + 1;
    reduceFraction(num, 6);
    return 0;
}
