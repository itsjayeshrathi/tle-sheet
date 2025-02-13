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
        int two_count = 0;
        vector<int> arr;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
            if (x == 2)
                two_count++;
        }
        if (two_count % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (two_count == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                int prev_count = two_count;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] == 2)
                        two_count--;
                    if (two_count == (prev_count / 2))
                    {
                        cout << (i + 1) << endl;
                        break;
                    }
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