#include<bits/stdc++.h>
using namespace std;
int main(){
    int flag=1;
    int n;
    cin>>n;
    int s=n*n;
    while(n>0){
        if(n%10!=s%10){
            flag=0;
            break;
        }
        n/=10;
        s/=10;
    }
    if(!flag)
    cout<<"Not an Automorphic Number";
    else
    cout<<"Automorphic Number";
}