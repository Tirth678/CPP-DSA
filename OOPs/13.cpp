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
    return 0;
}