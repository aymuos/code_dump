#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <ratio>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define mod 1000000007
using namespace std;
typedef unsigned long long int big;

big modExp(big x, big y)
{
    x = x % mod;
    if (x == 0)
        return 0;
    big result = 1;

    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return result;
}

big modInverse(big x)
{
    return modExp(x, mod - 2);
}

big combFactor(big k, big r)
{
    return ((((k - r + 1) % mod * (k - r + 2) % mod) % mod) * modInverse(((r % mod) * (r - 1) % mod) % mod)) % mod;
}

pair<big, big> numberTypes(big l, big r)
{
    big even = 0;
    big odd = 0;
    if ((r - l + 1) % 2 == 0)
    {
        even = (r - l + 1) / 2;
        odd = even;
    }
    else
    {
        if (l % 2 == 0)
        {
            odd = (r - l + 1) / 2;
            even = odd + 1;
        }
        else
        {
            even = (r - l + 1) / 2;
            odd = even + 1;
        }
    }
    return {even, odd};
}

// <Global Data>

// </Global Data>

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout); //comment when not needed
    big t = 1;
    // cin>>t;
    while (t--)
    {
        big l, r;
        cin >> l >> r;
        big k;
        cin >> k;
        if (k == 0)
        {
            cout << 1 << "\n";
            return 0;
        }
        
        pair<big, big> info = numberTypes(l, r);
        big even = info.first;
        big odd = info.second;
        big total = modExp(even, k);
        big factor = total;
        // cout << total << "\n";
        for (big i = 2; i <= k; i = i * 2)
        {
            // cout << modExp(odd, 2) << "\n";
            // cout << modInverse(modExp(even, 2)) << "\n";
            // cout << combFactor(k, i) << "\n";
            factor = (factor * modExp(odd, 2) * modInverse(modExp(even, 2)) * combFactor(k, i)) % mod;
            total = (total + factor) % mod;
        }
        cout << total;
    }
    return 0;
}
