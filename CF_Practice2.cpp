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
    int a,c=1;
    cin >> a;
    int ans =a;
    for (int i = a; i > 0; i--)
    {
        ans+=(i-1)*c;
        c++;
    }
    cout << ans << "\n";
}