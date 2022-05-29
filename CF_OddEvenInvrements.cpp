#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    int t,d;
    cin >> t;
    bool gan = 0, gen = 0, kir =0 , kan = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> d;
        if(i%2==1)
        {
            if(d%2==1){
                kir = 1;
            }
            else if(d%2==0)
            {
                kan = 1;
            }
        }
        else if(i%2==0)
        {
            if(d%2==1)
            {
                gan = 1;
            }
            else if (d%2==0)
            {
                gen = 1;
            }
        }
    }
    if((kir == 0 && kan == 1 || kir == 1 && kan == 0) && (gan == 0 && gen == 1 || gan == 1 && gen == 0))
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
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