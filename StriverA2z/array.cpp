#include<iostream>
using namespace std;
void minimumNumber(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
cout<<"minimum ="<<min<<endl;

}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    minimumNumber(arr,n);

}