#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        long long res = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            res ^= arr[i];
        }
        long long real_res = 0;
        for (long long i = 0; i < n; i++)
        {
            real_res ^= arr[i] ^ res;
        }
        if (real_res == 0)
        {
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
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