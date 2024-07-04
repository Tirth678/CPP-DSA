// recursive function prime numbers from 2 to n
#include<iostream>
using namespace std;
bool isPrime(int n);
void allPrime(int x);
int main(){

    // cout<<allPrime(4)<<endl;
    cout<<allPrime(2)<<endl;
    return 0;
}
bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i=2;i=i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void allPrime(int x){
    for(int i=2;i=i*i<=x; i++ ){
        if(isPrime(i)){
            cout<< i << " ";
        }
    }
}