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
    int t,r,tot=0;
    cin >> t;
    int *arr;
    arr = (int*)malloc(t*sizeof(int));
    for (int i = 0; i < t; i++)
    {
        iread(arr[i]);
        tot+=arr[i];
    }
    r = tot / t;
    int co = 0,ci=0,ca=0;
    if(tot%t!=0) cout << "-1\n";
    else
    {
        for (int i = 0; i < t; i++)
        {
            if(arr[i]!=r)++co;
            if(arr[i]<r)++ca;
            else ++ci;
        }
        (ci==t)?iprint(0):iprint(co-ca);
        cout << endl;
    } 
    free(arr);
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