#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n == 0){
        return 0;
    }else{
        return n + sum(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter an input"<<endl;
    cin>>n;
    cout<<sum(n);

    return 0;
}