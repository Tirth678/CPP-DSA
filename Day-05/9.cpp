#include<iostream>
using namespace std;
int main(){
    int a;
    
    while(true){
        cout<<"enter"<<endl;
        cin>>a;
        if(a%10==0){
            continue;
        }
        cout<<a<<endl;
        a++;
    }

    return 0;
}