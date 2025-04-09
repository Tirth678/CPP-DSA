// practice question
// Create a user with properties: id,(private), username(public), password(private)
// its id should be initialized in a parameter contructor
// getter setter for password;
#include<iostream>
using namespace std;
class User{
private:
int id;
string password;
public:
string username;
User(int id){
    this->id = id;
}
void setPassword(string p){
    password = p;
}
string getPassword(){
    return password;
}
};
int main(){
    User u1(101);
    u1.username = "Lol";
    u1.setPassword("This is Password");
    cout<<"Username: "<<u1.username<<endl;
    cout<<"Passowrd: "<< u1.getPassword()<<endl;
}