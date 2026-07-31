#include <iostream>
using namespace std;
void Binareysearch(int arr[],int n, int key ){
    int st=0;
    int end=n;
    int mid=(st+end)/2;
    for(int i =0;i<n;i++){
        if(arr[mid]==key){
            cout<<i<<" ";
        }

    }

}
int main(){
 int arr[]={2,4,6,7,8,9,0};
 int n=sizeof(arr)/sizeof(arr[0]);
 int key=8;
 Binareysearch(arr,n,8);
}