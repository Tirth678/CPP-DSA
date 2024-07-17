// #include<iostream>
// using namespace std;

// int main(){
//     int key = 5;
//     int fav[5] = {1,2,3,4,5};
// int n = sizeof(fav)/sizeof(int);
//     for(int i=0;i<n;i++){
//         if(key == fav[i]){
//             return i;
//             break;
//         }

//     }

//     return 0;
// }

// // function bana kr bhi kr skte hai
#include<iostream>
using namespace std;
int linearsearch(int *arr,int n, int key){
      for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,7,23,10};

    int n = sizeof(arr)/sizeof(int);

    cout<<linearsearch(arr, n, 5)<<endl;



    return 0;
}

