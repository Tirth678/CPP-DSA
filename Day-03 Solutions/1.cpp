// predict the output
// ans 5,4
// my ans 5,5
#include<iostream>
using namespace std;
int main(){
    int x =2, y =5;
    int exp1 = (x*y/x);
    int exp2 = (x*(y/x));
    cout<<exp1<<",";
    cout<<exp2<<"\n";

    return 0;
}
// how is this 4?
// ans: because y/x = 2.5 and since it is an integer it will be demoted to 2
// so 2*2 = 4