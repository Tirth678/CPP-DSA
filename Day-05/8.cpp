#include<iostream>
using namespace std;
int main(){
    int a;
    
    while(true){
        cin>>a;
        if(a%10==0){
            break;
        }
        cout<<a<<endl;
        a++;
    }

    return 0;
}