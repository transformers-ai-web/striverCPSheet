/*
In this problem, Vanya was making a pyramid with nth row as equal to 1+2+...+n.
So, this problem had two subtasks
1) calculating sum of cubes required for each row - this I have stored in the ans variable.
2) Also, calculating the total number of cubes required until that row, for nth row - add the number of cubes required for all rows til n. This I stored in the total variable.

Everytime, I updated the max, if and only if total is less than or equal to n (number of cubes given in the question) and used the while loop to exit when total was greater than or equal to n.
At the end, print the answer.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max=0, i = 1;
    cin>>n;
    long long int ans=0, total=0;
    while(total <= n){
        ans += i;
        i++;
        //cout<<ans<<endl;
        total += ans;
        //cout<<"total"<<total<<endl;
        if(total <= n)
            max++;
    }
    cout<<max;
    
    // int j = 38;
    // int temp;
    // cout<<endl;
    // for(int i = 1; i<=38;i++){
    //     temp += (i*j);
    //     j--;
    // }
    // cout<<temp;
}
