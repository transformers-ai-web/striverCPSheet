#include<bits/stdc++.h>

using namespace std;

int main(){
   int n, ans = 0;
   string polyhedron;
   cin>>n;
   while(n--){
       cin>>polyhedron;
       if(polyhedron == "Cube")
        ans+=6;
       else if(polyhedron == "Tetrahedron")
            ans+=4;
       else if(polyhedron == "Octahedron")
            ans+=8;
       else if(polyhedron == "Dodecahedron")
            ans+=12;
       else
            ans+=20;
   }
   cout<<ans;
    return 0;
}