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
int main(){
    ll int a;
    cin >> a;
    ll int now,last=-1,ans=0;
    for (ll int i = 0; i < a; i++)
    {
        cin >> now;
        if(last!=-1){
            if(now>last){
                ans+=now-last;
            }
        }
        last = now;
    }
    cout << ans;
}