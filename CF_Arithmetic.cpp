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
    float t;
    fread(t);
    float rat = 0,d,r=0;
    for (int i = 0; i < t; i++)
    {
        fread(d);
        r+=d;
    }
    rat = r/t;
    if(rat==1)iprint(0);
    else
    {
        if(r>t)printf("%.0f",r-t);
        else if(t>r)iprint(1);
    }
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