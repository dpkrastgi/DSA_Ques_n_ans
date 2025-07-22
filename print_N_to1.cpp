#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    func(i-1, n);
}
int main(){
    int n;
    cout<<"Enter an input"<<endl;
    cin>>n;
    func(n, n);

    return 0;
}