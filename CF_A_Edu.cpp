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
    ll a,m=0,index;
    cin >> a;
    ll ans[a];
    for (ll i = 0; i < a; i++)
    {
        cin >> ans[i];
        if(m<ans[i]){
            m=ans[i];
            index=i+1;
        }
    }
    cout << index << "\n";
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