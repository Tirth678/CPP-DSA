#include<iostream>
#include<math.h>
using namespace std;
int equation(int x, int y);
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<equation(a,b)<<endl;

    return 0;
}
int equation(int x, int y){
    int result;
    result = pow(x,2) + pow(y,2) +2*(pow(x*y,2));
    return result;

}