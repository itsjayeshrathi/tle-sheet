#include <bits/stdc++.h>
using namespace std;

bool check_parity(int x, int y)
{
    return (x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0);
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count = 0;
        int prev_val = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1)
        {
            cout << count << endl;
            continue;
        }

        for (int i = 1; i < n; i++)
        {

            if (check_parity(arr[i], arr[i - 1]) && (prev_val == 0))
            {
                prev_val = arr[i] * arr[i - 1];
                count++;
            }
            else if (prev_val && check_parity(prev_val, arr[i]))
            {
                prev_val = prev_val * arr[i];
                count++;
            }
            else
            {

                prev_val = 0;
            }
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