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
    int a , b, c, co=0;
    cin >> a >> b >> c;
    while(max(a,b)<=c)
    {
        if(a>b)b+=a;
        else a+=b;
        ++co;
    }
    iprint(co);
    printf("\n");
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