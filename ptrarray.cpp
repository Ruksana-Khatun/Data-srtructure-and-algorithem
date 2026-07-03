#include<Iostream>
using namespace std;
int voidptern(int*ptr,int n){
        for(int i=0;i<n;i++){
            cout<<*ptr<<endl;
            ptr++;
        }
    }
int main(){
    
//     int a=10;
//     int *ptr=&a;
//     cout<<*ptr<<endl;

//     cout<<ptr<<endl;
//    ptr--;

//     cout<<ptr<<endl;
       
//        cout<<(ptr+3)<<endl;
       
    int arr[20]={4,6,9,0,12,4};
     int*ptr=arr;
     cout<<*ptr<<"/n";
     int *ptr2=ptr+3;
     cout<<*ptr<<endl;
     cout<<*ptr2<<endl;

 
    int n=sizeof(arr)/sizeof(arr[0]);
    voidptern(arr,n);

}