#include<iostream>
using namespace std;
class Student{ // class
    // properties
    public: // access modifiers

        string name;
        float cgpa;
        // methods
        void getPercentage(){
        cout<<"cgpa: "<<cgpa*10<<endl;
        }

};
int main(){
    Student s1; // object

    return 0;
}

