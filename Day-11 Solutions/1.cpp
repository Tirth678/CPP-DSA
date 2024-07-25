#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,3, 3, 4, 5};
    int i = 0; 
    if (i>1 &&  (arr[i] == arr[i-1] || arr[i] == arr[i-2])) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
