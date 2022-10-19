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
ll int getans(ll int a,ll int b,ll int c)
{
    ll int b_back = c-a, a_front = a;
    while(1)
    {
        if(a_front%b==0 || b_back%b==0){
            continue;
        }else{
            cout << "YES\n" <<  a_front << " " << b_back << " " << c << "\n";
            return 1;
        }
    }
    return 0;
}
void solve()
{
    ll int x,y,cek_x=0;
    cin >> x >> y;
    if(y==1){
        cout << "NO\n";
        return;
    }
    cek_x = x;
    while(1){
        if(getans(x,y,(cek_x*2)*y)!=0){
            break;
        }else{
            cek_x *= 2;
        }
    }
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