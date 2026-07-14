#include<iostream>
#include<climits>
using namespace std;
void kdansalgo(int arr[],int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i =0;i<n;i++){
        currsum +=arr[i];
        maxsum=max(maxsum,currsum );
        if(currsum<0){
          currsum =0;
        }

    }
    cout<<"maxum  subarr value="<<maxsum<<endl;
}
int main(){
    int arr[]={-2,-4,6,7,8,9};
    int n=6;
    //let's do dry run  
    

kdansalgo(arr,n);
}