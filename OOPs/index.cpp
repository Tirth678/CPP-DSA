#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // kisi property ko private bhi kr skte ho
    private:
    int age;
    public:
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
    Teacher t1;
    t1.name = "rekha";
    t1.subject = "computer science and life science";
    t1.dept = "BSc and MSc";
    t1.salary = 32.32;
    t1.age = 32; // error dikha rha coz age is private
    cout<<"salary = "<<t1.salary<<endl;
    cout<<"name = "<<t1.name<<endl;


    return 0;
}