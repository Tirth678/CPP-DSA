#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the value"<<endl;
    cin>>n;
    int sum = 0;
    for ( i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout<<sum<<endl;
    


    return 0;
}