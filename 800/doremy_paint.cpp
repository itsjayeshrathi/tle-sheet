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
        int x;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {

            cin >> x;
            mp[x]++;
        }

        if (mp.size() > 2)
        {
            cout << "No" << endl;
        }
        else
        {
            auto it = mp.begin();

            if (mp.size() == 1 || abs(it->second - next(it)->second) <= 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
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