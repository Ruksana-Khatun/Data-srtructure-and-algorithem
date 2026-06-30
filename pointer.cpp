#include <iostream>
using namespace std;
 int main (){
int a=10;
cout<<&a<<endl; 
// int*ptr=&a;
// cout<<ptr<<endl;
int b=20;
int*ptr1=&b;
cout<<&b<<endl;
cout<<ptr1<<endl;

    int arr1[] = {1, 4, 3, 5, 8, 6};

    int n = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < n; i++) {
        cout << arr1[i] << endl;
    }

    return 0;
 }
 