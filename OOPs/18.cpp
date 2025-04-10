// static variable
#include<iostream>
using namespace std;
void counter(){
    static int count = 0; // ye lifetime ke liye memory me rhega
    count++;
    cout<<"cout: "<<count<<endl;
}
int main(){
    counter();
    counter();
    counter();

    return 0;
}