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
    short a,b,c;
    //no less than a and no more than b.
    // behind = 0 - b.
    // front = a - all - 1.
    cin >> a >> b >> c;
    (a-b>c)? cout << c + 1 : cout << a-b;
}