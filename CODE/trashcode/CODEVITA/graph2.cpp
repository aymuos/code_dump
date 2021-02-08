#include <bits/stdc++.h>


using namespace std;

int division(int numb)
{
  int i;
  for (i = 2; i < (int)sqrt(numb); i++)
  {
    if (numb % i == 0)
    {
      return (int)(numb / i);
    }
  }
  return 1;
}

int main()
{
  int large, small, n, k, l, qq,pp;
  map<int, int> mp;
  int ct = 1;
  cin >> qq;
  cin >> pp;
  large = max(qq, pp);
  small = min(qq, pp);
  if (large == small)
  {
    cout << "0\n";
    return 0;
  }
  n = large;
  mp[n] = 0;
  int div;
  while (n != 1)
  {

    div = division(n);
    mp[div] = ct;
    ct++;
    n = div;
  }
  ct = 0;
  n = small;

  while (1)
  {

    if (mp[n] != 0)
    {
      cout << ct + mp[n];
    }
    else
    {
      div = division(n);
      ct++;
      n = div;
    }
  }

  return 0;
}
