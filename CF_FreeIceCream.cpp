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
    int c,j,d,stres=0;
    long long t;
    string s;
    cin >> j >> t; //t for count
    for (int i = 0; i < j; i++)
    {
        cin >> s >> d;
        if(s=="+") t+=d;
        else 
        {
            if(t-d>=0)t-=d;
            else stres++;
        }
    }
    cout << t << " " << stres ;
    return 0;
}