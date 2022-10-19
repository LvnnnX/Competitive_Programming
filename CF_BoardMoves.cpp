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
    unsigned long long int n,ans=0; //size of the board. (odd)
    cin >> n;
    for (unsigned long long int i = n; i > 1; i-=2)
    {
        ans += i/2 * ((i*2) + (i-2)*2);
    }
    cout << ans << "\n";
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