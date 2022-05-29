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
    int t;
    iread(t);
    string arr;
    cin >> arr;
    for (int i = 0; i < t; i++)
    {
        if(arr[i]=='U') printf("D");
        else if (arr[i]=='D') printf("U");
        else if(arr[i]=='L' || arr[i] == 'R') printf("%c",arr[i]);
    }
    printf("\n");
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