#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        if (n == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        if (arr[0] == arr[n - 1])
        {
            cout << "No" << endl;
            continue;
        }
        reverse(arr.begin(), arr.end());
        int prefix_sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                swap(arr[i - 1], arr[n - 1]);
            }
            else if (arr[i] == prefix_sum)
            {
                swap(arr[i], arr[i = 1]);
            }
            prefix_sum += arr[i];
        }
        cout << "Yes" << endl;
        print(arr);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}