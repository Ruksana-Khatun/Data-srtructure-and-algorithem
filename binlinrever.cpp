#include<iostream>
using namespace std;



int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int copyarr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyarr[j]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
        
    }
  

   // Step 3: Print the reversed array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   
}
