#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,l;
    cin>>a>>b;
    if(a>b)
    l=a;
    else
    l=b;
    while(l)
    {
        if(l%a==0 && l%b==0)
        {
            cout<<l;
            break;
        }
        l++;
    }
    return 0;
}