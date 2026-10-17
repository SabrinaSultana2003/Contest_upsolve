#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> P(n + 1);
        vector<int> pos(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> P[i];
            pos[P[i]] = i;
        }

        vector<pair<int, int>> ans;

        for (int i = 1; i <= n; i++)
        {
            if (P[i] == i)
            {
                continue;
            }

            int j = pos[i];

            if (abs(P[i] - P[j]) >= abs(i - j))
            {
                ans.push_back({i, j});

                swap(P[i], P[j]);

                pos[P[i]] = i;
                pos[P[j]] = j;
            }
        }

        cout << ans.size() << endl;

        for (auto a : ans)
        {
            cout << a.first << " " << a.second << endl;
        }
    }

    return 0;
}