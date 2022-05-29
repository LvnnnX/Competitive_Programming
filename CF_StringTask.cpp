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
    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    EACH(x,s)
    {
        if(x == 'a' || 
        x == 'i' ||
        x == 'u' ||
        x == 'e' ||
        x == 'o' || 
        x == 'y') continue;
        else cout << "." << x;
    }
}