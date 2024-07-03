#include<iostream>
using namespace std;
int main(){
    int n=7;
    for(int i=1; i<n; i++){
        for(int j; j<=i; j++){
            cout << "*";
        }
        for(int j=1; j=2*(n-i); j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << endl;
        }
    }

    return 0;
}