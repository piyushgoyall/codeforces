#include <bits/stdc++.h>
using namespace std;

string removeDuplicateLetters(string s)
{
  string ans = "";
  for (int i = 0; i < s.length(); i++)
  {
    int j = 0;
    for (j = 0; j < i; j++)
    {
      if (s[i] == s[j]) // same character found
      {
        break;
      }
    }
    if (i == j)
    {
      ans += s[i];
    }
  }
  return ans;
}
int main()
{
  string strr;
  cin >> strr;
  string s1 = removeDuplicateLetters(strr);
  int a = s1.length();
  if (a % 2 == 0)
  {
    cout << "CHAT WITH HER!";
  }
  else
  {
    cout << "IGNORE HIM!";
  }
  return 0;
}