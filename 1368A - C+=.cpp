#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long a, b, n, sum, temp, cnt=1;
        cin>>a>>b>>n;
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        
        sum = a + b;
          
        while(sum<=n){
            a = b;
            b = sum;
            sum = a+b;
            cnt++;
        }
        
    cout<<cnt<<endl;
    }
}

