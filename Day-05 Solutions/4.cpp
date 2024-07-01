#include<iostream>
using namespace std;
int main(){
    bool isPrime = true;
   int i,n;
   cout<<"enter the value"<<endl;
   cin>>n;
   for ( i = 2; i < n-1; i++)
   {
    if(n%1==0){
        isPrime = false;
        break;
    }
    // cout<<"the number is prime"<<endl;
   }
   

    return 0;
}