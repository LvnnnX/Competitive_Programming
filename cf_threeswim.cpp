#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int z;
    cin >> z;
    for(int x =0; x<z;x++){
        long int a=0,b =0,c=0,d=0;
        cin >> a >> b >> c >> d;
        long int temp = min(min(b*((a/b)+1),c*((a/c)+1)),d*((a/d)+1));
        if (temp == a + b or temp == a + c or temp == a + c) cout << 0 <<"\n";
        else cout << temp - a <<"\n";
    }
}