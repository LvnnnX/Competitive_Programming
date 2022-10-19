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
    int t,l=0,r=0; // l for odd, r for even
    cin >> t;
    if(t%4!=0) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int i = 2; i <= t; i+=2)
        {
            if(i==t-1) break;
            if(i%2==0) r+=i;
            else l+=i;
            cout << i << " ";
            if(i==t) i=-1;
        }
        cout << abs(r-l) << endl;
    }
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