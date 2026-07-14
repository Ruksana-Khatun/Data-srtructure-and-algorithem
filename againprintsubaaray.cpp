#include<iostream>
using namespace std;
void printsubarray(int arr[],int n){
    for(int start =0;start<n;start++){
        for(int end=0;end<n;end++){
              
            for(int i=start;i<end;i++){
        
              cout<<arr[i];
            }
          cout<<endl;
        }
        

    }
    

}
int main(){
    int arr[]={5,10,15,20};
    //print subarray
    // how does subarray is=
    // 5  now printing sub aarray  0 to 0
    // 5 10 =0-1       
    // 5 10 15 =0-2
    // 5,10,15,20=0-3
    // 10 ==1-1
    // 10 15= 1-2
    // 10 15 20=1-3
    // 15=2-2
    // 15 20=2-3
    // 20=3
    // this is all subaray is okay 
    // now you have to understand that how  will you print lets take an example
    // how will you do .. sube phle index chuno 


    int n=4;
    printsubarray(arr,n); 


}
