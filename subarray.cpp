#include<iostream>
using namespace std;
int printsubarray(int *arr,int n){
      for(int start = 0; start < n; start++) {

        for(int end = start; end < n; end++) {

            for(int k = start; k <= end; k++) {

                cout << arr[k] << " ";

            }

            cout << endl;
        }
    }
};
int main(){
    int arr[]={4,6,8,10,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    printsubarray(arr,n);
}