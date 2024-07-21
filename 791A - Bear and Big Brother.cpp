#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long a, b, cnt=0;
    cin>>a>>b;
    while(a <= b){
        a = a*3;
        b = b*2;
        cnt++;
    }
    cout<<cnt;
}
