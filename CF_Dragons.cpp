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
    int s, n;
    bool ok = true;
    cin >> s >> n;
    vt<vt<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int x , y;
        cin >> x >> y;
        ans.pb({x,y});
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < n; i++)
    {
        if(s > ans[i][0]) s += ans[i][1];
        else ok = false;
    }
    
    (!ok)? cout << "NO" << endl : cout << "YES" << endl;
    return 0;
}