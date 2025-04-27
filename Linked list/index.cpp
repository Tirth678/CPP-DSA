#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
public:
    Node(int val){
        data = val;
        next = NULL;
    }
};
class LL{
    Node* head;
    Node* tail;
};
int main(){
    return 0;
}