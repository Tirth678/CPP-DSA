#include<iostream>
using namespace std;
int main(){
    int n = 108293592;
    int digitsum = 0;
    while(n>0){
    int lastdig = n % 10;
    if(lastdig % 2!= 0)
    digitsum += lastdig;
    n = n/10;
    }
    cout<<"sum = "<<digitsum<<endl;

    return 0;
}
// to get last num %10
// 74%10 = 4