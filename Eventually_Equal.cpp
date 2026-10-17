#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int A, B, C;
        cin >> A >> B >> C;

        if(A == B)
        {
            cout << 0 <<endl;
            continue;
        }

        int ans = INT_MAX;

        for(int add = 0; add <= 3; add++)
        {
            int c = C + add;

            int g1 = __gcd(A, c);
            int g2 = __gcd(B, c);

            if(g1 == g2)
            {
                ans = min(ans, add + 1);
            }
        }

        cout << ans <<endl;
    }

    return 0;
}