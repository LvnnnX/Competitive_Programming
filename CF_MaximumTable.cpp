#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    int t;
    cin >> t;
    int arr[t][t];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if(i == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                if(j == 0)
                {
                    arr[i][j] = arr[i-1][j];
                }
                else
                {
                    arr[i][j] = arr[i-1][j] + arr[i][j-1];
                }  
            }
        }
    }
    cout << arr[t-1][t-1];
}
int main()
{
    solve();
    return 0;
}