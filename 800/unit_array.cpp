#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> arr(n);
        int one_count = 0;
        int neg_one_count = 0;
        int min_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            (arr[i] == 1) ? one_count++ : neg_one_count++;
        }
        if (one_count > neg_one_count && neg_one_count % 2 == 0)
        {
            cout << min_count << endl;
        }
        else
        {
            int diff = abs(one_count - neg_one_count);
          
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