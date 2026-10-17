#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int op = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0) 
            {
                continue; 
            }

            bool paired = false;

            for(int j = i + 1; j < n; j++)
            {
                if(arr[i] == 1 && arr[j] == 1)
                {
                    arr[i] = 0;
                    arr[j] = 0;
                    op++;
                    paired = true;
                    break; 
                }
            }

           if(!paired)
            {
                arr[i] = 0;
                op++;
           }
        }

        cout << op << endl;
    }

    return 0;
}