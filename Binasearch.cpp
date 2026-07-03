#include<iostream>
using  namespace std;
  int Binarysearch(int *arr,int n,int key){
   int st=0;int end=n-1;
   while(st<=end){
    int mid=(st+end)/2;
    if(arr[mid]==key){
     return mid;
    }
    //let me worte a psudedo code for evrything [3 5 6 7 8 9 0 9 0 7]
    else if(arr[mid]<key){
        st=mid+1;

    }else{
       end=mid-1;
    }

   }
   return -1;
   
        
    }
int main(){
    int arr[]={4,6,8,10,12,14};
    int n=sizeof(arr)/sizeof(int);
   cout<< Binarysearch(arr,n,10)<<endl;
  
}