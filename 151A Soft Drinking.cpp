#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    //total toasts that can be made
    int drink = (k * l)/nl ;
    int lemon = c * d ;
    int salt = p / np ;
    //cout<<drink<<" "<<lemon<<" "<<salt<<endl;
    int total_drinks = min(drink ,min(lemon, salt));
    //cout<<total_drinks<<endl;
    cout<<total_drinks/n<<endl;
    return 0;
}