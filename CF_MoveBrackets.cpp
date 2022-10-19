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
    int t,c=0,i;
    cin >> t;
    string s;
    cin >> s;
    while(1)
    {
        int f=0;
        for (i = 0; i < s.length()-1; i++)
        {
            if(s[i]=='('&&s[i+1]==')')
            {
                s.erase(i,2);
                f++;
                break;
            }
        }
        if(s.length()==0||f==0)break;
    }
    c=(s.length()!=0)?s.length()/2:0;
    cout << c << endl;
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
//()()()()