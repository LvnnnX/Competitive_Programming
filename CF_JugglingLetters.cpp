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
    int t;
    iread(t);
    bool ok = 1;
    vt<int> s(26);
    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;
        EACH(x, a)
        {
            ++s[x - 'a'];
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(s[i]%t!=0)
        {
            ok=0;
            break;
        }
    }
    (ok)?printf("YES\n") : printf("NO\n");
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