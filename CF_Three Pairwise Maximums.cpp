#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    int *arr;
    arr = (int*)malloc(3*sizeof(int));
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    sort(arr, arr+3);
    (arr[1]!=arr[2])?printf("NO\n") : printf("YES\n%d %d %d\n",arr[0],arr[0],arr[2]);
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