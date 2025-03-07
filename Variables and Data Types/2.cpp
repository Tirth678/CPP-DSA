#include<iostream>
using namespace std;
int main(){
    float pencil, pen, eraser;
    cout<<"Enter price of pencil: "<<endl;
    cin>>pencil;
    cout<<"Enter price of pen: "<<endl;
    cin>>pen;
    cout<<"Enter price of eraser: "<<endl;
    cin>>eraser;
    cout<<"Total price of the items: "<<pen+pencil+eraser<<endl;
    cout<<"Total price with added 18% GST: "<<(pencil+pen+eraser)+(pencil+pencil+eraser)*(0.18)<<endl;
}