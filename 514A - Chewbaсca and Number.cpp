#include<bits/stdc++.h>
using namespace std;
int main(){
    string str_number;
    cin>>str_number;
    str_number = to_string(stoll(str_number));
    long long new_number = 0;
    
    for(int i = 0; i<str_number.size();i++){
        int digit = '9' - str_number[i];
        int unaffected_digit = str_number[i] - '0';
        //cout<<digit<<" "<<unaffected_digit<<" "<<str_number[i]-'0'<<endl;
        
        if(i==0 && str_number[0] - '0' == 9){
            new_number = new_number * 10 + unaffected_digit;
        }
        
        else if(str_number[i] - '0' > digit){
            new_number = new_number * 10 + digit;
        }
        else{
            //cout<<"hey"<<endl;
            new_number = new_number * 10 + unaffected_digit;
        }
    }
    cout<<new_number<<endl;
    return 0;
}







// #include <bits/stdc++.h>
// #include<string>
// using namespace std;

// int main() {
//     string number;
//     cin>>number;
//     string new_number = to_string(stoi(number));
//     cout<<new_number<<endl;
//     //cout<<number<<" "<<new_number<<endl;
//     int i = 0;
//     //cout<<new_number.size()<<endl;
//     //cout<<'9' - new_number[0]<<endl;
//     //cout<<stoi(number[0])<<endl;
//     //cout<<9 - stoi(number[0])<<endl;
//     while(i!= new_number.size()){
//         //cout<<new_number[i]<<endl;
//         //cout<<'9'-new_number[i]<<endl;
//         string digit = string('9' - new_number[i]);
//         if(new_number[i] > digit){
//             cout<<"hello"<<endl;
//             new_number[i] = digit;
//             cout<<new_number[i]<<endl;
//         }
//         i++;
//     }
//     cout<<new_number;
//     return 0;
// }
