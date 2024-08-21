#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long int n, i, temp;
        cin>>n;
        temp = n;
        cout<<"2"<<"\n";
        for(i = n-1; i >=1 ; i--){
            cout<<temp<<" "<<i<<"\n";
            temp = ((temp + i) % 2 == 0 ? (temp + i)/2 : i+1);
        }
        //cout<<temp<<"\n";
    }
}
