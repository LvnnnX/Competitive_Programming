#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    int t,sum=0,cek;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&cek);
        sum+=cek-1;
    }
    (sum%2==0)?printf("maomao90\n"):printf("errorgorn\n");
}
int main()
{
    int masuk;
    cin >> masuk;
    while(masuk--)
    {
        solve();
    }
    return 0;
}