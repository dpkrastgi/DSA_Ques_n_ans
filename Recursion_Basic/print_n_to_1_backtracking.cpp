#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i>n){
        return;
    }
    func(i+1, n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter an input"<<endl;
    cin>>n;
    func(1, n);

    return 0;
}