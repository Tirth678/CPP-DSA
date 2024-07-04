// using bionomial coefficient
#include<iostream>
using namespace std;
int factorial(int x);
int bionomialCoff(int n, int r);
int main(){ 
    cout<<bionomialCoff(3,2)<<endl;


    return 0;
}
int factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        int result;
        result = x*factorial(x-1);
        return result;
    }
}
int bionomialCoff(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);
    int geuslt = val1/(val2*val3);
    return geuslt;
}