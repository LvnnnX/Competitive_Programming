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
    int t,d;
    iread(t);
    bool ok = 0;
    int sum = 0, ans = 0;
    for (int i = 0; i < t; i++)
    {
        iread(d);
        if(d==1)
        {
            if(ok==1)
            {
                ans += sum;
                sum = 0;
            }
            else ok = 1;
        }
        else if(d==0)
        {
            if(ok)++sum;
        }
    }
    printf("%d\n",ans);
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