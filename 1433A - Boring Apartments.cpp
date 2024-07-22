#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0, cnt = 0, temp;
        int arr[5] = {0, 1, 3, 6, 10};
        temp = (n%10)-1;
        if(temp < 0) temp = 0;
        ans += (temp * arr[4]);
        //cout<<"ans"<<ans<<"\n";
        while(n){
            n = n/10;
            cnt++;
        }
        ans += arr[cnt];
        cout<<ans<<"\n";
    }
}