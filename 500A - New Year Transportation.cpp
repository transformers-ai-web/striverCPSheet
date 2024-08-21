#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n, t, i, flag=0;
    cin>>n>>t;
    long long arr[n];
    arr[n-1] = 0;
    for(i = 0; i<n-1; i++){
        cin>>arr[i];
    }
    for(i = 0;i <n;){
        //here in getting tle it was my mistake
        //as t was my basis to break from the loop,
        //i should have checked for all the 3 conditions
        //greather than t, less than t and equal t
        //not having '=' in line 19 led to tle - hahahaha
        if(i >= t) break;
        if(i == t-1)
        { 
         flag = 1;
         //cout<<"hey";
         break;
        }
        i = i + arr[i];
    }
    //cout<<flag;
    flag == 1? cout<<"YES":cout<<"NO";
}
