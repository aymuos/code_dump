#include<bits/stdc++.h>
using namespace std;
typedef long long int big;
int main(){
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
            // cout << "\n";
        }
}
