#include<iostream>
using namespace std;
int printn(int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main(){
  int arr[]={45,6,7,8,9,0};
  int n =sizeof(arr)/sizeof(arr[0]);
  
  int copyarr[n];
  for(int i=0;i<n;i++){
    int j=n-i-1;
    copyarr[i]=arr[j];
  }
  for(int i =0;i<n;i++){
   arr[i]=copyarr[i];
    
  }
  printn(arr,n);


}