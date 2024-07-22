#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int lowerBound=0, upperBound=0,ans=0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '1'){
               lowerBound = i;
                break;
            } 
        }
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] == '1'){
               upperBound = i;
               break;
            } 
        }
        // cout<<lowerBound<<endl;
        // cout<<upperBound<<endl;
        if(lowerBound == upperBound)
            ans = 0;
        else {
            for(int i = lowerBound; i<upperBound; i++){
                if(s[i] == '0')
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }
}