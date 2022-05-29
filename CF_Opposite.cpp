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
    int a, b, c, nil = 0;
    cin >> a >> b >> c;
    int tot = abs(a-b)*2;
    if(c > tot) iprint(-1);
    else
    {
        if(tot<max(a,b))iprint(-1);
        else if(c>tot)iprint(-1);
        else
        {
            nil = (c-abs(a-b));
            if(nil<=0)
            {
                iprint(tot+nil);
            }
            else iprint(nil);
            
        }
    }
    cout << endl;
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