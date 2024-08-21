#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, arr[7], prefixSum[7], ans = 0;
    cin>>n;
    for(int i = 0;i<7;i++){
        cin>>arr[i];
    }
    prefixSum[0] = arr[0];
    for(int i = 1;i<7;i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    // for(int i =0;i<7;i++){
    //     cout<<prefixSum[i];
    // }
    if(n % prefixSum[6] == 0){
        //look for the first occurence of number equal to or slightly greater than the divisor.
        //remember the divisor is the total number pages read by the end of week.
        int divisor = prefixSum[6];
        for(int i = 0; i<7;i++){
            if(prefixSum[i] >= divisor){
                ans = i+1;
                break;
            }
        }
    }
    else{
        //now look for the remainder
        int _remainder = n % prefixSum[6];
        for(int i = 0; i<7;i++){
            if(prefixSum[i] >= _remainder){
                ans = i+1;
                break;
            }
        }
    }
    //now print the answer
    cout<<ans;
}
