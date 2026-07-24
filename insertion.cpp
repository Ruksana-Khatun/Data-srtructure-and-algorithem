#include<iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int j =0;j<n;j++){
                cout<<"*";
            }

        }
    }
    

}

int main(){
    int arr[3][4];
int n=3;
int m=4;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i] [j] ;
    }
    cout<<endl;
}

    
}
