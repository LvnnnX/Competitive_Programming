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
    int *arr;
    arr = (int*)malloc(7*sizeof(int));
    for (int i = 0; i < 7; i++)
    {
        iread(arr[i]);
    }
    int cek=2;
    while(arr[6]!=arr[0]+arr[1]+arr[cek])
    {
        ++cek;
    }
    printf("%d %d %d\n",arr[0],arr[1],arr[cek]);
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