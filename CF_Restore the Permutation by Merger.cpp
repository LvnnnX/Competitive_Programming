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
    arr = (int*)malloc(t*2*sizeof(int));
    for (int i = 0; i < t*2; i++)
    {
        cin >> arr[i];
    }
    int cek = 0;
    for (int i = 0; i < t*2; i++)
    {
        if(arr[i] == 0) pass;
        else
        {
            for (int j = i+1; j < t*2; j++)
            {
                if(arr[i] == arr[j])
                {
                    arr[j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < t*2; i++)
    {
        if(arr[i]) cout << arr[i] << " ";
    }
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