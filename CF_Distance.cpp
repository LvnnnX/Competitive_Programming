#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
using namespace std;
#define pass (void)0
void solve()
{
    int t,kurs,cek = 0;
    scanf("%d %d",&t, &kurs);
    int *arr;
    bool boom = 0;
    arr = (int*)malloc(t * sizeof(int));
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+t,greater<int>());
    cek = arr[0] * 2 + 1;
    for (int i = 1; i < t-1; i++)
    {
        if(cek>kurs)break;
        cek+=arr[i]+1;
    }
    cek+= 1;
    (cek>kurs)?printf("NO\n") : printf("YES\n");
}
int main()
{
    int masuk;
    cin >> masuk;
    while(masuk--)
    {
        solve();
    }
    return 0;
}