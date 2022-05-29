#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    char s[20],a[20];
    bool ok = 0;
    fgets(s,20,stdin);
    fgets(a,20,stdin);
    for (int i = 0; i < 15; i+=3)
    {
        if(a[i]==s[0])
        {
            ok = 1;
            break;
        }
        if(a[i+1]==s[1])
        {
            ok = 1;
            break;
        }
    }
    (ok)?cout<<"YES":cout<<"NO";
}
int main()
{
    solve();
    return 0;
}