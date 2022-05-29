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
int a = 0, b = 0, c = 0;
void solve()
{
    int d,e,f;
    cin >> d >> e >> f;
    a += d;
    b += e;
    c += f;
}
//equilibrium still a question.
int main()
{
    int masuk;
    scanf("%d",&masuk);
    while(masuk--)
    {
        solve();
    }
    if(a==0 && a==b && a==c) cout << "YES";
    else cout << "NO";
    return 0;
}