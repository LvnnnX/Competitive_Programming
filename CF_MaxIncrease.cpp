#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define iread(x) scanf("%d",&x)
#define fread(x) scanf("%f",&x)
#define iprint(x) printf("%d",x)
#define pass (void)0
using namespace std;
void solve()
{
    int t,ins = 0,temp = 0;
    iread(t);
    int d;
    vt<int> ans;
    for (int i = 0; i < t; i++)
    {
        iread(d);
        if(d-temp>0)++ins;
        else
        {
            ans.pb(ins);
            ins=1;
        }
        temp = d;
    }
    ans.pb(ins);
    int &maks = *max_element(ans.begin(),ans.end());
    iprint(maks);
}
int main()
{
    solve();
    return 0;
}