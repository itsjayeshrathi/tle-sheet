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
        vector<int> arr(n);
        int one_count = 0;
        int neg_one_count = 0;
        int min_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            (arr[i] == 1) ? one_count++ : neg_one_count++;
        }

        if (neg_one_count % 2 == 0 && one_count >= neg_one_count)
        {
            cout << 0 << endl;
        }
        else
        {
            if (neg_one_count > one_count)
            {

                while (!(one_count >= neg_one_count && neg_one_count % 2 == 0))
                {

                    one_count++;
                    neg_one_count--;
                    min_count++;
                }
            }
            else
            {
                while (!(neg_one_count % 2 == 0 && one_count >= neg_one_count))
                {
                    neg_one_count++;
                    one_count--;
                    min_count++;
                }
            }

            cout << min_count << endl;
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