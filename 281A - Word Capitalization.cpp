#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string capitalise, test;
    //test = 66;
    //cout<<test;
    cin>>capitalise;
    int temp = capitalise[0];
    //cout<<temp;
    if(temp > 90)
        capitalise[0] = capitalise[0] - 32;
    // for(int i = 1;i<capitalise.size();i++){
    //     temp = capitalise[i];
    //     if(temp < 97)
    //         capitalise[i] = capitalise[i] + 32;
    // }
        
    cout<<capitalise;
}
