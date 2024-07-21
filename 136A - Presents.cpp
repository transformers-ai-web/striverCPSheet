#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, temp;
    map<int, int> mpp;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>temp;
        mpp[temp] = i+1;
    }
    for(auto it : mpp){
        cout<<it.second<<" ";
    }
    return 0;
}
