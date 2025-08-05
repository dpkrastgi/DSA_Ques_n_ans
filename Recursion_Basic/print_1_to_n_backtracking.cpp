#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i<1){
        return;
    }
    //Function call before print.
    func(i-1, n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter an input"<<endl;
    cin>>n;
    func(n, n);

    return 0;
}