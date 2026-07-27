#include<iostream>
using namespace std;
void lenearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
            if(arr[i]==key){
                cout<<i;
            }
        
    }

}
int main(){
    int arr[]={5,6,7,8,9,0,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=9;
    lenearsearch(arr,n ,9);


}