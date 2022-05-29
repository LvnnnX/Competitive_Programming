#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    float f, tot;
    scanf("%f %f",&f, &tot);
    int sum = 1;
    f -= 2;
    if(f>0)sum = sum + ceil(f/tot);
    printf("%d\n",sum);
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