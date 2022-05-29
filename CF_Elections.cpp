#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define iread(x) scanf("%d",&x)
#define fread(x) scanf("%f",&x)
#define iprint(x) printf("%d",x)
#define pass (void)0
using namespace std;
void solve()
{
    int a,b,c;
    cin >>a >> b >> c;
    int maks = max(max(a,b),c);
    if(maks==a&&maks!=b&&maks!=c) cout << 0 << " ";
    else cout << maks - a + 1 << " ";
    if(maks==b&&maks!=a&&maks!=c) cout << 0 << " ";
    else cout << maks - b + 1 << " ";
    if(maks==c&&maks!=a&&maks!=b) cout << 0 << " ";
    else cout << maks - c + 1 << "  ";
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