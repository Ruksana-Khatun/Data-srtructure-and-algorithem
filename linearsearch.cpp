#include <Iostream>
using namespace std;
int lineasesearch(int*arr,int n ,int target){
    for(int i =0;i<n;i++){
        if(arr[i]==target){
            return i ;
        }
       
    }
    return -1;

}
int main (){
    int arr[]={2,4,6,8,10,12};
     int n =sizeof(arr)/sizeof(int);
     cout<< lineasesearch(arr,n,20)<<endl;
      
}