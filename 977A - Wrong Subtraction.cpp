#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    cin>>n>>k;
    while(k--){
        if(n%10==0){
            n = n/10;
            //cout<<n<<endl;
        }
        else{
            n--;
        }
    }
    cout<<n;
    return 0;
}
