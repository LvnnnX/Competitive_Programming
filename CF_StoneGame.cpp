#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define iread(x) scanf("%d",&x)
#define fread(x) scanf("%f",&x)
#define iprint(x) printf("%d\n",x);
#define pass (void)0
using namespace std;
void solve()
{
    int t;
    iread(t);
    int *arr;
    arr = (int*)malloc(t*sizeof(int));
    for (int i = 0; i < t; i++)
    {
        iread(arr[i]);
    }
    int &maxs = *max_element(arr,arr+t), &mins = *min_element(arr,arr+t);
    int sum = 0, temp = 0,count=  0, b = 0;
    bool ka = 0, ki = 0, cek = 0;
    for (int i = 0; i < t; i++)
    {
        if(arr[i] == mins || arr[i] == maxs)
        {
            if(cek==0)
            {
                b = i+1;
                cek = 1;
            }
        }
        if(arr[i] == mins) ki = 1;
        else if(arr[i] == maxs) ka = 1;
        if(ki == 1 && ka == 1)
        {
            temp = i+1;
            ki = ka = 0;
            break;
        }
    }
    cek = 0;
    for (int i = t-1; i >= 0; --i)
    {
        ++count;
        if(arr[i] == mins || arr[i] == maxs)
        {
            if(cek==0) 
            {
                b += count;
                cek = 1;
            }
        }
        if(arr[i] == mins) ki = 1;
        else if(arr[i] == maxs) ka = 1;
        if(ki == 1 && ka == 1)
        {
            sum = min(min(temp,count),b);
            break;
        }
    }
    iprint(sum);
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