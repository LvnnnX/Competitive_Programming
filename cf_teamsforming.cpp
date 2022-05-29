#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr[a];
    for(int x =0;x<a;x++){
        cin>>arr[x];
    }
    sort(arr,arr+a,greater<int>());
    int sum = 0;
    for(int x =0; x<a-1;x+=2){
        sum+=arr[x] - arr[x+1];
    }
    cout << sum;
}