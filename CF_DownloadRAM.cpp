#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define iread(x) scanf("%d",&x)
#define fread(x) scanf("%f",&x)
#define iprint(x) printf("%d\n",x)
#define pass (void)0
using namespace std;
void solve()
{
    ll a,b,c;
    cin >> a >> b;
    vt<vt<ll>> ans;
    for (ll i = 0; i < a; i++)
    {
        cin >> c;
        ans.pb({c,0});
    }
    for (ll i = 0; i < a; i++)
    {
        cin >> c;
        ans[i][1] = c;
    }
    sort(ans.begin(), ans.end());
    for (ll i = 0; i < a; i++)
    {
        if(ans[i][0]<=b){
            b+=ans[i][1];
        }
    }
    cout << b << "\n";
}
int main()
{
    ll masuk;
    scanf("%d",&masuk);
    while(masuk--)
    {
        solve();
    }
    return 0;
}