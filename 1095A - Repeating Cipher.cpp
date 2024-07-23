#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s, t;
    cin>>t;
    int j = 0;
    for(int i = 0; i<n; i++){
        j += i;
        //cout<<j<<endl;
        if(j >= n)
            break;
        s += t[j];
    }
    cout<<s;
}