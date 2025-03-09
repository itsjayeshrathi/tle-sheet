#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        string s;
        cin >> n;
        cin >> s;
        int left = 0, right = n - 1;
        while (s[left] != s[right] && left <= right)
        {
            left++;
            right--;
        }
        if (left > right)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (right - left + 1) << endl;
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