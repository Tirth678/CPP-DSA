// print the largest number out of 3
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first value"<<endl;
    cin>>a;
    cout<<"enter the second value"<<endl;
    cin>>b;
    cout<<"enter the third value"<<endl;
    cin>>c;
    int max=a;
    if(a>b){
        max = a;
    }
    else if(b>c){
        max = b;
    }
    else if(c>a){
        max = c;
    }   
    cout<<"the maximun between the 3 is "<<max<<endl;


    return 0;
}
