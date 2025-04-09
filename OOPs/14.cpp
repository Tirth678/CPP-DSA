// function overloading
#include<iostream>
using namespace std;
class Print{
public:
    void show(int x){
        cout<<"x: "<<x<<endl;
    }
    void show(string str){
        cout<<"string: "<<str<<endl;
    }
};
int main(){
    Print obj;
    obj.show(25);
    obj.show("LOL");

    return 0;
}