#include <iostream>
using namespace std;
int main(){
     int arr[]={22, 14, 8, 17, 35, 3};
     // 4+4+4+4+4+4=24
     //npw total size of 24/4=6
     // array ka length n hota hi  and lascleart index of array n-1 hota hi just keep this in your head 
    int max=arr[0];
    int min =arr[0];
     int n =sizeof(arr)/sizeof(arr[0]);
     for(int i =0;i<n;i++){
        if(arr[i]> max){
            max=arr[i];

        }
        if(arr[i]<min)
        min=arr[i];
    
     }
     cout<< "max value of =" <<max<<endl;
     cout<< "min value of= "<<min<<endl;
    


}