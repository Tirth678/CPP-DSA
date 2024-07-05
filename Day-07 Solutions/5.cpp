#include<iostream>
using namespace std;
char getnext(char ch);
int main(){
    char s;
    cout<<"enter the alphabet"<<endl;
    cin>>s;
    cout<<"the next alphabet = "<<getnext(s)<<endl;

    return 0;
}
char getnext(char ch){
    if(ch == 'z'){
        return 'a';
    }
    else{
        return ch+1;
            }
}