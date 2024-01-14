#include <bits/stdc++.h>
using namespace std;

/*
*********
 *******
  *****
   ***
    *
*/


int main(){
    for(int i=10;i>1;i-=2){

        for(int j=10;j>=i;j-=2){ // for space................
            cout<<" ";
        }

        for(int k=i;k>1;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}
