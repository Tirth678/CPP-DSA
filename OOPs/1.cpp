#include<iostream>
using namespace std;
class Student{ // class
    // properties
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

// instragram user example
#include<iostream>
using namespace std;
class Instagram{
    int id;
    string name;
    string username;
    string password;
    string bio;
    string newBio;

    void deactivate(){
        cout<<"Acount deactivated"<<endl;
    }
    void deleteMyAcoount(){
        cout<<"Account has been deleted"<<endl;
    }
    void editBio(string bio){
        bio = newBio;
    }
};
int main(){

    return 0;
}