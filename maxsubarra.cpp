#include<iostream>
#include<climits>
using namespace std;
void maxsubaray(int arr[],int n){
    int maxsub=INT_MIN;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            int CurrSum=0;
            for(int k=i;k<=j;k++){
                CurrSum +=arr[k];
                cout<<CurrSum<<" ";
                maxsub=max(maxsub ,CurrSum);
                
            }
            cout<<endl;
        }

    }
    cout<<"maxum sub aary sum= "<<maxsub<<endl;
}
int  main(){
    int arr[5]={2,4,-3,5,-2};
    int n=5;
    // i am going to add sub array aand finding the max subaary 
    //let's do     2
                // 2 6
                // 2 6 3
                // 2 6 3 8
                // 2 6 3 8 6
                // 4
                // 4 1
                // 4 1 6
                // 4 1 6 4
                // -3
                // -3 2
                // -3 2 0
                // 5
                // 5 3
                // -2

    maxsubaray(arr,n);

}