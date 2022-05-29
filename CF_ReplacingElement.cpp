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
    int t, d,co=0;
    cin >> t >> d;
    int *arr;
    arr = (int*)malloc(t*sizeof(int));
    bool ok =0;
    for (int i = 0; i < t; i++)
    {
        iread(arr[i]);
    }
    sort(arr,arr+t);
    (arr[0]+arr[1]<=d||arr[t-1]<=d)?ok=1:ok=0;
    (ok)?printf("YES\n"):printf("NO\n");
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