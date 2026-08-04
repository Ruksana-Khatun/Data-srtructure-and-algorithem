#include<iostream>
#include <string>
#include<vector>
using namespace std;
void function(){
    cout<<"Rescursion"<<endl;
    function();
}
int factorial(int n){
    if(n==0){
        return 1;

    }
    return n*factorial(n-1); 

}
void printnumber(int n){
    if(n==0){
        return;
    }
     printnumber(n-1);
    cout<<n<<" ";
    
//  printnumber(n-1);

}

int main(){
    // int ans =factorial(3);
    // cout<<ans<<endl;
    // function();
    printnumber(10);
    

}
