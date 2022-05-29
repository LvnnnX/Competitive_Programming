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
    int t;
    iread(t);
    int ps[10] = {4,7,47,74,447,474,477,744,747,774}, cek = 0;
    bool ok = 0;
    for (int i = 0; i < 10; i++)
    {
        if(t % ps[i] == 0)
        {
            ok = 1;
            break;
        }
    }
    (ok)?cout<<"YES":cout<<"NO";
    return 0;
}