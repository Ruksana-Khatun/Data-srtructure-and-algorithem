#include<iostream>
#include<vector>
#include<string>
using namespace std;
void passbyvalue(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    // int arr[]={1,2,3,4,5};
    // int n=5;
    // passbyvalue(arr,n);
     vector<int>arr={1,2,3,4,5,5};
     int n=6;
     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}