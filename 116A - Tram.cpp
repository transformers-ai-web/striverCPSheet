#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, total = 0, maxi = INT_MIN, a, b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        total = total - a + b;
        maxi = max(total, maxi);
    }
    cout<<maxi;
    return 0;
}
