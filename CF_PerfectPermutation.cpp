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
    int t;
    iread(t);
    if(t%2==1)iprint(-1);
    else
    {
        for (int i = 0; i < t; i+=2)
        {
            printf("%d %d ",i+2,i+1);
        }
        
    }
    printf("\n");
}
int main()
{
    solve();
    return 0;
}