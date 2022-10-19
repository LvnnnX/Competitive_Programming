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
    int a,b,c=0,s=0,x=1;
    cin >> a >> b;
    while(a!=0)
    {

        c+=a;
        s+=a%b;
        a=a/b; //used candles / make new
        if(a==0&&s>b){a=s/b;s=s%b;}

    }
    if(s==b)c++;
    cout << c << endl;
    return 0;
}