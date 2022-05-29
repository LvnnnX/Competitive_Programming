#include <iostream>
using namespace std;
int main(){
    int a,b,suma = 0 ,sumb = 0,sumc = 0;
    cin >> a;
    for(int x = 1; x <= a; x++){
        cin >> b;
        if(x % 3 == 1) suma+=b;
        if(x % 3 == 2) sumb+=b;
        if(x % 3 == 0) sumc+=b;
    }
    if(suma > sumb && suma > sumc) cout << "chest";
    else if(sumb > suma && sumb > sumc) cout << "biceps";
    else if (sumc > suma && sumc > sumb) cout << "back";
}