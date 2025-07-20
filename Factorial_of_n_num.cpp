#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 1){
        return 1;
    }else{
        return n * fact(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter an input"<<endl;
    cin>>n;
    cout<<fact(n);

    return 0;
}
//Time Complexity = O(n)
//Stack(Space) complexity = O(n)