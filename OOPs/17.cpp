#include<iostream>
using namespace std;
class Shape{
public:
    virtual void draw() = 0; // abstract fxn, pure virtual fxn

};
class Circle : public Shape{
    public:
    void draw(){
        cout<< "draw circle"<<endl;
    }
};
int main(){
    Circle c1;
    c1.draw();
    Shape s1; // error becuase it is an abstract class
    // jisme bhi pure virtual function milega wo class apne aaps abstract ho jayegi
    return 0;
}