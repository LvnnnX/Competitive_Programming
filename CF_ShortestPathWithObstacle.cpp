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
    int x[2],y[2],z[2];
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    cin >> z[0] >> z[1];
    int sum = abs(x[0]-x[1]) + abs(y[0]-y[1]);
    if(x[0]==x[1] && x[0] ==z[0] && z[1] < max(y[0],y[1]) && z[1] > min(y[0],y[1])) sum += 2;
    else if(y[0]==y[1] && y[0] == z[1] && z[0] < max(x[0],x[1]) && z[0] > min(x[0],x[1])) sum += 2;
    iprint(sum);
    printf("\n");
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