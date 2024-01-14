#include <bits/stdc++.h>
using namespace std;

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
 */

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2 == 0 && j%2 != 0){
                cout<<0<<" ";
            }
            else if(i%2 != 0 && j%2 == 0){
                cout<<0<<" ";
            }
            else{
                 cout<<1<<" ";
            }
           
        }
        cout<<endl;
    }
}