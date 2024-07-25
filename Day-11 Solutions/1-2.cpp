#include<iostream>
using namespace std;
int main(){
    int num[100];
    int n = sizeof(num)/sizeof(int);
    cout<<"enter size of array"<<endl;
    cin>>n;
    for(int i; i<n; i++){
        cin>>num[100];
        if(num[i] == num[i-1] || num[i] == num[i-2] || num[i] == num[i-3]){
            cout<<"false"<<endl;
        }
        else{
            cout<<"true"<<endl;
        }
    }
    return 0;
    }


   