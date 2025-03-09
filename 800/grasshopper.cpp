#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if (x % k != 0 || k > x)
        {
            cout << 1 << endl;
            cout << x << endl;
            continue;
        }
        bool flag = true;
        int i = 1;
        while (flag)
        {
            int rem = x - i;
            if (i % k != 0 && rem % k != 0)
            {
                cout << 2 << endl;
                cout << rem << " " << i << endl;
                flag = false;
            }
            i++;
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