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
    ll a, b, dis=0, pos=1;
    cin >> a >> b;
    ll arr[b];
    for (ll i = 0; i < b; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < b; i++)
    {
        if(arr[i] > pos)
        {
            dis += arr[i]-pos;
        }
        else if(arr[i] < pos)
        {
            dis += (a-pos)+arr[i];
        }
        else continue;
        pos = arr[i];
    }
    cout << dis << endl;
}