#include<iostream>
using namespace std;
void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1; // 2^0+2^1+2^2..
    while(n>0){
        int lastDig = n%10;
        decNum += lastDig*pow;
        pow = pow*2;    
        n = n/10;
    }
    cout << decNum << endl;
}
int main(){
    binToDec(111111);

    return 0;
}