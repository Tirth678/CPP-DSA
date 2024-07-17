#include<iostream>
using namespace std;
int main(){
    // int marks[50]; // 0 to 49
    // int marks[50] = {1,2,3}; // 0 to 49
    int marks[] = {1,2,3};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    // cout<<sizeof(marks)<<endl; // 12 aayega coz 4 byte=1 integer
    // size of marks = 12/size of 1 int
    // 12/4 = 3
    // cout<<marks[3]<<endl; // random value print hogi
    // cout<<marks[51]<<endl;
    // a warning that 51th element does not exist so compiler just prints garbadge value


    
    
    return 0;
}
