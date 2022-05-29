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
    cin >> t;
    int sum =0;
    bool gan = false, gen = false;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        sum+=x;
        gan = !(!gan && x%2==1);
        gen = !(!gen && x%2==0);
    }
    (sum%2!=0||(gan&&gen))?cout <<"YES\n":cout<<"NO\n";
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