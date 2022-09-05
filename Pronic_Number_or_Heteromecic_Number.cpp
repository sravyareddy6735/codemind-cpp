#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i*(i+1)==n){
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
}