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
int solve()
{
    int t, ans=0;
    cin >> t;
    char arr[101];
    bool cek[26];
    memset(cek, 0, 26);
    cin >> arr;
    for (int i = 0; i < strlen(arr); i++)
    {
        if(cek[arr[i]%26]==0)
        {
            ans += 2;
            cek[arr[i]%26]=1;
        }else ans+=1;
    }
    return ans;
}
int main()
{
    int masuk,t=0;
    scanf("%d",&masuk);
    int ans[masuk];
    while(masuk--)
    {
        ans[t++]=solve();
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
    
    return 0;
}