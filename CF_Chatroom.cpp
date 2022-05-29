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
    char s[105];
    fflush(stdin);
    fgets(s,101,stdin);
    char find[] = "hello";
    int cek = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] == find[cek])
        {
            s[i] = 'a';
            ++cek;
        }
    }
    (cek==5)?cout<<"YES":cout<<"NO";
    return 0;
}