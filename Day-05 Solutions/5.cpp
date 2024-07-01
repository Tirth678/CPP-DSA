// #include <iostream>
// using namespace std;

// int fibonacci_numbers(int n)
// {
// 	if(n == 0){
// 		return 0;
// 	}
// 	else if(n == 1){
// 		return 1;
// 	}
// 	else{
// 		return fibonacci_numbers(n-2) + fibonacci_numbers(n-1);
// 	}
// }

// int main() {
// 	int n = 7;
// 	for(int i = 0; i < n; i++)
// 	{
// 		cout << fibonacci_numbers(i) << " ";
// 	}
// 	return 0;
// }


// solution:
//Qs : Print N Fibonacci Numbers
#include<iostream>
using namespace std;
int main(){
int n = 10;
int first = 0, sec = 1;
cout << first << " " << sec << " ";
for(int i=2; i<n; i++) {
int third = first + sec;
cout << third << " ";
first = sec;
sec = third;
}
cout << "\n";
return 0;
}