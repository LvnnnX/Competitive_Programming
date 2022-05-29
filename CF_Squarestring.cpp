#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    string s;
    cin >> s;
    bool ok = 1;
    if(s.size()%2==1) ok = 0;
    else
    {
        for (int i = 0; i < s.size()/2; i++)
        {
            if(s[i]==s[s.size()/2+i])
            {
                ok = 1;
            }
            else
            {
                ok = 0;
                break;
            }
        }
    }
    (ok)?cout<<"YES\n":cout<<"NO\n";
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