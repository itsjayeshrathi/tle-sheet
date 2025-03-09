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
        vector<long long> diff;
        bool is_unsorted = false;
        int min_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 1 && arr[i] < arr[i - 1] && !is_unsorted)
            {
                is_unsorted = true;
            }
            else if (i > 1)
            {
                diff.push_back(arr[i] - arr[i - 1]);
            }
        }
        if (is_unsorted)
        {
            cout << min_count << endl;
        }
        else
        {
            
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