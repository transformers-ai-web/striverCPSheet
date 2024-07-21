#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max=0, i = 1;
    cin>>n;
    long long int ans=0, total=0;
    while(total <= n){
        ans += i;
        i++;
        //cout<<ans<<endl;
        total += ans;
        //cout<<"total"<<total<<endl;
        if(total <= n)
            max++;
    }
    cout<<max;
    
    // int j = 38;
    // int temp;
    // cout<<endl;
    // for(int i = 1; i<=38;i++){
    //     temp += (i*j);
    //     j--;
    // }
    // cout<<temp;
}
