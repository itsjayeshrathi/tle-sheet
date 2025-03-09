#include <bits/stdc++.h>

#define ll long long
#define endl " \n";

using namespace std;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            if (k % 2 != 0)
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