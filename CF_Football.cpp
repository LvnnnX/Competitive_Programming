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
    int a;
    cin >> a;
    vt<string> s;
    vt<int> n;
    for (int i = 0; i < a; i++)
    {
        string b;
        int y;
        cin >> b;
        bool ok = false;
        for (y = 0; y < s.size(); y++)
        {
            if(s[y]==b){
                n[y]+=1;
                ok=true;
                break;
            }
        }
        if(!ok)
        {
            s.pb(b);
            n.pb(1);
        }
    }
    int max=n.size()-1;
    for (int i = 0; i < n.size()-1; i++)
    {
        if(n[i] > n[i+1])max=i;
    }
    cout << s[max];
    return 0;
}