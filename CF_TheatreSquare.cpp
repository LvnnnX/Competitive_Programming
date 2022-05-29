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
int main()
{
    ll a,b,c;
    cin >> a >> b  >> c;
    if(a%c>0)a=a/c+1;
    else a = a/c;
    if(b%c>0)b=b/c+1;
    else b = b/c;
    cout << a * b;
    return 0;
}