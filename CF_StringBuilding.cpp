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
    bool ok = s.size()>1;
    int sum = 1;
    char cek = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i]==cek)
        {
            ++sum;
        }
        else if(i == s.size()-1)
        {
            if(s[i]!=cek)sum=1;
            if(sum%2==1)sum-=3;
            if(sum<0)
            {
                ok = 0;
                break;
            }
            if(sum%2!=0||sum%3!=0)
            {
                ok = 0;
            }
        }
        else
        {
            if(sum%2==1)sum-=3;
            if(sum<0)
            {
                ok = 0;
                break;
            }
            if(sum%2==0||sum%3==0)
            {
                sum = 1;
                cek = s[i];
            }
            else
            {
                ok = 0;
                break;
            }
        }
    }
    (ok)?printf("YES\n"):printf("NO\n");
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