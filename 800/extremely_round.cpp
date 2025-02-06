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
        if (n < 10)
        {

            cout << n << endl;
            continue;   
        }
        int count = 9;
        int initial_divisor = 10;
        while (n / initial_divisor != 0)
        {
            int round_num = n / initial_divisor;
            if (round_num > 9)
            {
                count += 9;
            }
            else
            {
                count += round_num;
            }
            initial_divisor *= 10;
        }

        cout << count << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}