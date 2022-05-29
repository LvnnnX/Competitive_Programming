#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define iread(x) scanf("%d",&x)
#define fread(x) scanf("%f",&x)
#define iprint(x) printf("%d",x)
#define pass (void)0
using namespace std;
void solve()
{
    int t;
    iread(t);
    char s[t][5];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>s[i][j];
        }
        
    }
    bool ok = 0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 5; j+=3)
        {
            if(s[i][j] == 'O' && s[i][j+1] == 'O')
            {
                s[i][j] = '+';
                s[i][j+1] = '+';
                i = t+1;
                ok =1;
                break;
            }
        }
    }
    if(ok)
    {
        cout<<"YES\n";
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
    
    }
    else cout << "NO\n";
}
int main()
{
    solve();
    return 0;
}