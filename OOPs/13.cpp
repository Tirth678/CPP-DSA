// inheritance
// multiple inheritance
#include<iostream>
using namespace std;
class Teacher{
public:
    int salary;
    string subject;

};
class Student{
public:
    int rolling;
    float cgpa;

};
class TA : public Teacher, public Student{
    public:
    string name;
};
int main(){
 TA t1;
 t1.salary;
 t1.cgpa;
 t1.name;
 
    return 0;
}