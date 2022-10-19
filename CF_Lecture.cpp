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
    int n, m; //n is all we find || m is input
    cin >> n >> m;
    string s[m][2],find;
    for (int i = 0; i < m; i++)
    {
        cin >> s[i][0] >> s[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> find;
        for (int j = 0; j < m; j++)
        {
            if(s[j][0]==find||s[j][1]==find){
                if(s[j][0].length()>s[j][1].length()){
                    cout << s[j][1] << " ";
                }else{
                    cout << s[j][0] << " ";
                }
                break;
            }
        }
    }
}