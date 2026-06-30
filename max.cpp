#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,8,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int idx=0; idx<n;idx++){
        if(arr[idx]>max){
            max=arr[idx];
       

        }
        
    }
    cout<<max<<endl;

}