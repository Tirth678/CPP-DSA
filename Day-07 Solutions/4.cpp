#include<iostream>
using namespace std;
int maxof3(int x, int y, int z);
int main(){
    int a,b,c;
    cout<<"enter the first value"<<endl;
    cin>>a;
    cout<<"enter the second value"<<endl;
    cin>>b;
    cout<<"enter the third value"<<endl;
    cin>>c;
    cout<<"the maximum number = "<<maxof3(a,b,c)<<endl;


    return 0;
}
int maxof3(int x, int y, int z){
    int max;
    if(x>y){
        max = x;
    }
    else if(y>z){
        max = y;
    }
    else if(z>x){
        max = z;
    }
    return max;
}