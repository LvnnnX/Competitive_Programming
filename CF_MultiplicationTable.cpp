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
    unsigned long int n, x, ans=0;//n for table  || x for number we need to find
    cin >> n >> x;
    for (unsigned long int i = n; i > 0; i--)
    {
        // so if the number we wanna find can be divided by the row and not exceeding the limit of the column number, it should be in the table//
        if(x%i==0){
            if(x/i>n){
                break;
            }else{
                ans++;
            }
        }
    }
    cout << ans;
}