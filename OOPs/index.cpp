#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // properties
    string name;
    string dept;
    string subject;
    double salary;

    // methods(member functions)
    void changedip(string newdept){
        dept = newdept;
    }
};
int main(){
    Teacher t1,t2;
    

    return 0;
}