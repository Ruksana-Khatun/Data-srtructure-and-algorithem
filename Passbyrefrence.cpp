#include <iostream>
using namespace std;
void arrayfunction(int Nums[],int n){
    for(int i=0;i<n;i++){
        cout<<Nums[i]<<endl;
    }

}

void function(int&x){
    x=10;
    
}
int main(){
    int a=02;
    int Nums[]={4,5,6,7,8,9,0,9};
   int n =sizeof(Nums)/sizeof(Nums[0]);
   arrayfunction(Nums, n);
    
    cout<<a<<endl;

}
