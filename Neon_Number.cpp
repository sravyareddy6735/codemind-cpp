#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,sum=0;
    cin>>n;
    p=n*n;
    while(p>0)
    {
        q=p%10;
        sum=sum+q;
        p=p/10;
    }
    if(sum==n){
        cout<<"Neon Number";
    }
    else{
        cout<<"Not Neon Number";
    }
}