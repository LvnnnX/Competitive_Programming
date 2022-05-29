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
    scanf("%d",&t);
    int d = 0, num = 0, temp = t,k=0,b=1;
    while(temp>0)
    {
        ++k;
        temp/=10;
    }
    while(d<k)
    {
        ++d;
        num = num * 10 + 1;
        if(d != k)
        {
            if(b == 9) b = (b+1) * 10;
            else if(b < 10) b *= 9;
            else b *= 10;
        }
        else
        {
            b = t;
        }
        temp+=b/num;
    }
    printf("%d\n",temp);
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