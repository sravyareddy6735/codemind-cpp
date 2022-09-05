#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,p=1,rem;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        p=p*rem;
        n=n/10;
    }
    if(sum==p){
        cout<<"Spy Number";
    }
    else{
        cout<<"Not Spy Number";
        }
return 0;
}