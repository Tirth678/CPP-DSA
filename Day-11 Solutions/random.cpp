#include<iostream>
using namespace std;
int main(){
    int target = 9;
    int sum[4] = {2,7,11,15};
    if(sum[0]+sum[1] == target){
        cout<<"[0,1]"<<endl;
    }
    else if(sum[1]+sum[2] == target){
        cout<<"[1,2]"<<endl;
    }
    else if(sum[2]+sum[3] == target){
        cout<<"[2,3]"<<endl;
    }
    

    return 0;
}