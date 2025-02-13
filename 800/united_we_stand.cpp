#include <bits/stdc++.h>
using namespace std;

template <typename T>

void print(vector<T> x)
{
    for (auto i : x)
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
        vector<long long> arr(n);
        vector<long long> a;
        vector<long long> b;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0)
            {
                a.push_back(arr[i]);
            }
            else
            {
                if (a[i - 1] % arr[i] != 0)
                {
                    b.push_back(arr[i]);
                }
            }
        }
        if (b.empty())
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            cout << a.size() << " " << b.size() << endl;
            print(a);
            print(b);
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