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
    int a = 0, b= 0, c =0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='A')++a;
        else if(s[i]=='B')++b;
        else ++c;
    }
    (a+c==b)?cout<<"YES\n":cout<<"NO\n";
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