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
    string s, ans;
    cin >> s;
    cin >> ans;
    int t = 0, sum = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if(ans[i]==s[j])
            {
                if(i==0)
                {
                    t=j;
                    break;
                }
                sum += abs((j)-t);
                t = (j);
                break;
            }
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