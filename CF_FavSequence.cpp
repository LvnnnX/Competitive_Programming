#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define pb push_back
#define EACH(x, a) for (auto& x: a)
#define pass (void)0
using namespace std;
void solve()
{
    int t;
    cin >> t;
    int *arr;
    arr = (int*)malloc(t*sizeof(int));
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int half = (t%2==1)? t/2+1 : t/2;
    for (int i = 0; i < half; i++)
    {
        if(i == half-1 || t == 1)
        {
            if(t%2==1)
            {
                cout << arr[i];
            }
            else
            {
                cout << arr[i] << " " << arr[t-i-1];
            }
        }
        else
        {
            cout << arr[i] << " " << arr[t-i-1] << " ";
        }
    }
    free(arr);
    cout << endl;
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