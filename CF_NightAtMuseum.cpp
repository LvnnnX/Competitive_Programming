#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    char s[200];
    fflush(stdin);
    gets(s);
    char cek = 'a';
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        sum+=min(abs(cek-s[i]),26-abs(cek-s[i]));
        cek = s[i];
    }
    cout << sum;
}
int main()
{
    solve();
    return 0;
}