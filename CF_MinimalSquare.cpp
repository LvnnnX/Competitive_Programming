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
    int a, b;
    cin >> a >> b;
    if(a==b) cout << pow(a+b,2);
    else if(a < b) if(a+a >= b) cout << pow(a+a,2) ; else cout << pow(b,2);
    else if(a > b) if(b+b >= a) cout << pow(b+b,2); else cout << pow(a,2);
    cout << endl;
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