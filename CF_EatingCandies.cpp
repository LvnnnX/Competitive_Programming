#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    int t;
    scanf("%d",&t);
    int *arr;
    arr = (int*)malloc((t+1)*sizeof(int));
    for (int i = 1; i < t+1; i++)
    {
        scanf("%d",&arr[i]);
    }
    int kiri =1, kanan = t, makan = 0,skir = 0, skan = 0,sum=0;
    while(makan<=t)
    {
        if(skir > skan)
        {
            skan += arr[kanan--];
        }
        else if(skir < skan)
        {
            skir += arr[kiri++];
        }
        else
        {
            skir += arr[kiri++];
            sum = makan;
        }
        makan++;
    }
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