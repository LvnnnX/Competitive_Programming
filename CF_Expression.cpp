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
int main(){
    int a,b,c,aa,bb,cc,dd,ee,ff,gg,hh;
    iread(a);
    iread(b);
    iread(c);
    aa = a+b+c;
    bb = a*b+c;
    cc = a+b*c;
    dd = a*b*c;
    ee = (a*b)+c;
    ff = a*(b+c);
    gg = (a+b)*c;
    hh = a+(b*c);
    cout << max(max(max(max(max(max(max(aa,bb),cc),dd),ee),ff),gg),hh);
}