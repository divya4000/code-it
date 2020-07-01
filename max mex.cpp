#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < m)
            {
                s.insert(a[i]);
            }
        }
        if (s.size() != (m - 1))
        {
            cout << "-1\n";
        }
        else
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == m)
                {
                    c++;
                }
            }
            cout << n - c << "\n";
        }
    }
}

    
    

    
