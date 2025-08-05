#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i>n){
        return;
    }
    cout<<"Deepak"<<endl;
    func(i+1, n);
}
int main(){
    int n;
    cout<<"Enter an input"<<endl;
    cin>>n;
    func(1, n);

    return 0;
}