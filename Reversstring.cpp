#include<iostream>
using namespace std;
void reverse(char aray[],int n){

    int st=0;
    int end=n-1;
    while(st<end){
        swap(aray[st],aray[end]);
        st++;
        end--;
        
    }
    cout<<aray<<endl;
}
int main(){
    int n=5;
    char aray[5]={'h','e','l','l','o'};
   reverse(aray,n);
    return 0;
}