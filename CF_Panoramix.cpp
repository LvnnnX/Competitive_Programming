#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    bool cek = 0;
    for (int i = a+1; i < b+1; i++)
    {
        bool ok = 1;
        int fact = 0;
        for (int j = 2; j <= i/2; j++)
        {
            if(i%j==0)++fact;
            if(fact>0)
            {
                ok = 0;
                break;
            }
        }
        if(ok)
        {
            if(i==b)
            {
                cek = 1;
            }
            else
            {
                cek = 0;
                break;
            }
        }
    }
    (cek)?cout <<"YES":cout<<"NO";
}
int main()
{
    solve();
    return 0;
}