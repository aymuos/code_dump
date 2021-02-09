#include <bits/stdc++.h>
using namespace std;
typedef long long int big;
 
// <Global Data>
int dp[8][100005];
// </Global Data>
 
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);//comment when not needed
    big t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << n << "\n";
        cout << m << "\n";
        vector<vector<pair<big, big>>> arr(n);
        vector<pair<big, big>> colors(7);
        for (big i = 0; i < 7; i++)
        {
            colors.push_back({0, i + 1});
            cout << "*";
        }
        for (big i = 0; i < n; i++)
        {
            arr.push_back(colors);
            cout << "i";
        }
        for (big box = 0; box < n; box++)
        {
 
            for (big color = 0; color < 6; color++)
            {
                cout << arr[box][color].first << " " << arr[box][color].second;
            }
            cout << "\n";
        }
        for (int i = 0; i < m; i++)
        {
            int b, c, v;
            cin >> b >> c >> v;
            cout << b << "\n";
            b--;
            c--;
            arr[i][c].first = (arr[i][c].first > v) ? arr[i][c].first : v;
        }
        for (big i = 0; i < n; i++)
        {
            sort(arr[i].begin(), arr[i].end());
        }
        for (big box = 0; box < n; box++)
        {
            for (big color = 0; color < 7; color++)
            {
                cout << arr[box][color].first << " " << arr[box][color].second;
            }
            cout << "\n";
        }
        dp[0][0] = arr[0][6].first;
        for (big i = 1; i < 7; i++)
        {
            if (arr[0][6].second != i)
            {
                dp[i][0] = arr[0][6].first;
            }
            else
            {
                if (arr[0][5].second != 0)
                {
                    dp[i][0] = arr[0][5].first;
                }
                else
                {
                    dp[i][0] = -1;
                }
            }
        }
        for (big box = 1; box < n; box++)
        {
            //pick max
            big color = arr[box][6].second;
            big value = arr[box][6].first;
            big res1;
            if (dp[color][box - 1] == -1)
            {
                res1 = -1;
            }
            else
            {
                res1 = dp[color][box - 1] + value;
            }
            //pick second max
            big res2;
            if (arr[box][5].first == 0)
            {
                res2 = -1;
            }
            else
            {
                color = arr[box][5].second;
                value = arr[box][5].first;
                if (dp[color][box - 1] == -1)
                {
                    res2 = -1;
                }
                else
                {
                    res2 = dp[color][box - 1] + value;
                }
            }
            dp[0][box] = (res1 > res2) ? res1 : res2;
            for (big rcol = 1; rcol <= 7; rcol++)
            {
                {
                    color = arr[box][6].second;
                    value = arr[box][6].first;
                    if (dp[color][box - 1] == -1 || color == rcol)
                    {
                        res1 = -1;
                    }
                    else
                    {
                        res1 = dp[color][box - 1] + value;
                    }
                    if (arr[box][5].first == 0 && arr[box][5].second != rcol)
                    {
                        res2 = -1;
                    }
                    else
                    {
 
                        color = arr[box][5].second;
                        value = arr[box][5].first;
                        if (dp[color][box - 1] == -1)
                        {
                            res2 = -1;
                        }
                        else
                        {
                            res2 = dp[color][box - 1] + value;
                        }
                    }
                    dp[rcol][box] = (res1 > res2) ? res1 : res2;
                }
            }
        }
        cout << dp[0][n - 1] << "\n";
    }
    return 0;
}
