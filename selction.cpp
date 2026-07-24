#include<iostream>
using namespace std;
void printarra(int arr[],int n){
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
    
}
void selctonarr(int arr[],int n){
    for(int i=0;i<n-1;i++){
        
            int minidx=i;
        for(int j=i+1;j<n;j++){

          if(arr[j]<arr[minidx]){
            minidx=j;
          }

         
        }
    swap(arr[i],arr[minidx]);
        
    }
 printarra(arr,n);

}
int main(){
    int arr[]={5,4,1,3,2};
    int n=5;

selctonarr(arr,n);
}