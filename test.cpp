#include <iostream>
using namespace std;


void printsubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;

        }
    }

    
}

// write a function to print all prime numbers in a given range


int main() {
cout<<"Rukana khatun"<<endl;
cout<<"HI how are you doing in your life"<<endl;
cout<<"Hey i am doing realy wel thank you so mcuh fo rtalking to me"<<endl;

int arr[]={1,2,3,4,5};
// 1 12 123 1234 12345
// 2 23 234 2345
// 3 34 345
// 4 45
// 5 

//i want to find out this.
// let me write next way......... subarray int arr[]={1,2,3,4,5};
//  1 indx =0
//  12 indx =0-1
//  123     =0-1
//  1234     0-3
//  12345    0-4
//  2        1-1
//  23        1-2
//  234
//  2345      1-4
//  3         2 -2
//  34
//  345
//  4        3
//  45
//  5        4


int n=sizeof(arr)/sizeof(arr[0]);
printsubarray(arr,n);

}