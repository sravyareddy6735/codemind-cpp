#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, sum=0;
    vector<int> arr;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>a;
        arr.push_back(a);
        if(a%2!=0){
            sum+=a;
        }
    }
    
    cout<<sum;
}