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
    int d, g=0;
    for (int i = 0; i < t*2; i++)
    {
        cin >> d;
        if(d%2==1)++g;
    }
    (g==t)?cout<<"Yes\n":cout<<"No\n";
}
int main()
{
    int masuk;
    scanf("%d",&masuk);
    while(masuk--)
    {
        solve();
    }
    return 0;
}