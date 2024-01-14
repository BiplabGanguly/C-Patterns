#include <bits/stdc++.h>
using namespace std;

/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

int main(){
    // first half...................
    for(int i=1;i<=9;i+=2){
        for(int j=9;j>=i;j-=2){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    // second half......................

    for(int i=9;i>=1;i-=2){
        for(int j=9;j>=i;j-=2){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}
