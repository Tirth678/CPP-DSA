#include<iostream>
using namespace std;
int oddprint(int x);
int main(){
    int a;
    cout<<"enter your num"<<endl;
    cin>>a;
    cout<<oddprint(a)<<endl;
    return 0;
}
int oddprint(int x){
    if(x%2==0){
        // cout<<"the number is even"<<endl;
        return true;
    }
    else{
        // cout<<"the number is odd"<<endl;
        return false;
    }
}