#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s,ans;
    cin>>s;
    for(int i =0;i < s.size(); i++){
        if((s[i]=='a')||(s[i]=='A')||(s[i]=='e')||(s[i]=='E')||(s[i]=='i')||(s[i]=='I')||(s[i]=='o')||(s[i]=='O')||(s[i]=='u')||(s[i]=='U')||(s[i]=='y')||(s[i]=='Y')){
            continue;
        }
        else{
            ans += '.';
            if(s[i] >=65 && s[i] <=90){
                ans += (s[i] + 32);
            }
            else
                ans+=s[i];
        }
    }
    //special case when each character is a vowel in string.
    if(ans.empty())
        ans = " ";
    //the answer was being accepted in both the cases, that is without above if check and with it.
    cout<<ans;
}
