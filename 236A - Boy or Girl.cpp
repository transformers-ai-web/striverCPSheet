#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string username;
    cin>>username;
    //cout<<'z' - 'a';
    //set<char> st;
    int hash[26] = {0};
    for(int i = 0; i<username.size();i++){
        //st.insert(username[i]);
        hash[username[i] - 'a'] = 1;
    }
    int sum = 0;
    for(int i = 0;i<26;i++){
        sum += hash[i];
    }
    if(sum % 2 != 0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}
