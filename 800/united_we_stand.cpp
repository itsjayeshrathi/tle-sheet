#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n);
        map<long long, long long> mp;
        bool is_first = true;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if (mp.size() == 1)
        {
            cout << -1 << endl;
        }

        for (auto it : mp)
        {
            long long first = it.first;
            long long second = it.second;

            cout << it.second << " " << (n - it.second) << endl;

            if (is_first)
            {
                for (int i = 0; i < second; i++)
                {
                    cout << first << " ";
                }
                cout << endl;
                is_first = false;
            }
            else
            {
                for (int i = 0; i < second; i++)
                {
                    cout << first << " ";
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}