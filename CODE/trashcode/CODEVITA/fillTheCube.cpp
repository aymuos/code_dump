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
using namespace std;
typedef long long int big;

// <Global Data>

vector<string> v;

// </Global Data>

void gravity(vector<string> &v)
{
    big n = v.size();
    vector<big> count(n, 0);
    for (big i = 0; i < n; i++)
    {
        for (big j = n - 1; j >= 0; j--)
        {
            if (v[j][i] == 'C')
            {
                count[i]++;
            }
        }
        for (big it = 0; it < n; it++)
        {
            v[it][i] = 'D';
        }
        big c = 0;
        for (big it = n - 1; c < count[i]; c++)
        {
            v[it][i] = 'C';
            it--;
        }
    }
}

void rotate(vector<string> &a)
{
    big n = a.size();

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {

            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}

big maxSquare(vector<string> &v)
{
    big n = v.size();
    vector<big> dp(n + 1, 0);
    big m = 0, p = 0;
    for (big i = 1; i <= n; i++)
    {
        for (big j = 1; j <= n; j++)
        {
            big temp = dp[j];
            if (v[i - 1][j - 1] == 'D')
            {
                dp[j] = min(min(dp[j - 1], p), dp[j]) + 1;
                m = max(m, dp[j]);
            }
            else
            {
                dp[j] = 0;
            }
            p = temp;
        }
    }
    return m;
}

void displayMatrix(vector<string> &v)
{
    big n = v.size();
    for (big i = 0; i < n; i++)
    {
        for (big j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n******\n";
}

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout); //comment when not needed
    big t = 1;
    // cin>>t;
    while (t--)
    {
        big n;
        cin >> n;
        vector<string> v1;
        vector<string> v2;
        vector<string> v3;
        vector<string> v4;
        for (big i = 0; i < n; i++)
        {
            string temp;
            for (big i = 0; i < n; i++)
            {
                char c;
                cin >> c;
                temp.push_back(c);
            }
            v1.push_back(temp);
            v2.push_back(temp);
            v3.push_back(temp);
            v4.push_back(temp);
        }
        rotate(v2);
        rotate(v3);
        rotate(v3);
        rotate(v4);
        rotate(v4);
        rotate(v4);
        // displayMatrix(v1);
        // displayMatrix(v2);
        // displayMatrix(v3);
        // displayMatrix(v4);
        gravity(v1);
        gravity(v2);
        gravity(v3);
        gravity(v4);
        // displayMatrix(v4);
        big a = maxSquare(v1);
        big b = maxSquare(v2);
        big c = maxSquare(v3);
        big d = maxSquare(v4);
        cout << max(max(a, b), max(c, d)) << "\n";
    }
    return 0;
}
