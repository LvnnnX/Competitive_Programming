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
void solve()
{
    int t;
    iread(t);
    int *arr;
    arr = (int*)malloc(t * sizeof(int));
    for (int i = 1; i < t; i+=2)
    {
        arr[i] = i;
        arr[i-1] = i+1;
    }
    if(t%2==1)
    {
        arr[t-1] = arr[t-2];
        arr[t-2] = t;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
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