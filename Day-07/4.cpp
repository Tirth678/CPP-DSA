// // waf to weather a number is prime or not
// #include<iostream>
// using namespace std;
// bool isPrime(int n);
// int main(){
//     cout<<isPrime(4)<<endl;

//     return 0;
// }
// bool isPrime(int n){
//     if(n == 1){
//         return 1;
//     }
//     for(int i=2; i<=n; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }
#include<iostream>
using namespace std;
bool isPrime(int x);
int main(){

    cout<<isPrime(3)<<endl;
    return 0;
}
bool isPrime(int x){

    if(x == 1){
        return false;
    }
    for(int i=2;i=i*i<=x; i++){
        if(x%i==0 ){
            return false;
        }
    }
    return true;
}
