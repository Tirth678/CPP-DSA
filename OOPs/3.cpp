#include<iostream>
using namespace std;
class Student{ // class
    // properties
    string name;
    float cgpa;
public:
// Setters
    void setCgpa(float c){
        cgpa = c; 
    }
// Getters
    int getCgpa(){
        return cgpa;
    }

};
int main(){
    Student s1; // object

    return 0;
}

