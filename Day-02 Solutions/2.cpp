#include<iostream>
using namespace std;
int main(){
    float item1,item2,item3, total,gst;
    cout<<"enter the price of item 1"<<endl;
    cin>>item1;
    cout<<"enter the price of item 2"<<endl;
    cin>>item2;
    cout<<"enter the price of item 3"<<endl;
    cin>>item3;
    total = item1+item2+item3;
    gst = total*0.18;
    cout<<"the total cost of the goods = "<<total<<endl;
    cout<<"the total cost of the goods plus GST = "<<gst<<endl;

    return 0;
}