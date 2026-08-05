#include<iostream>
#include <string>
#include<vector>
using namespace std;
void function(int n){
    if(n==0){
        return;
    }
    cout<<"Rescursion"<<endl;
    function(n);
}
int sumnumber(int n){
    if(n == 1){
      return 1;
    };
return n+sumnumber(n-1);

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

int sum(int n){
    if(n==1){
        return 1;
    }
   return n+sum(n-1);
}
int fiabinachi(int n){
    if(n == 0|| n == 1){
        return n;
    }
    return fiabinachi(n-1)+fiabinachi(n-2);
}
bool arraysorted(int arr[],int n,int i){
    if(i==(n-1)){
        return true;

    }
    if(arr[i]<arr[i+1]){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    arraysorted(arr,n,i+1);


}
int firstoccurens(vector<int>arr,int i,int target){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;

    }
    return firstoccurens(arr ,i+1,target);

}
int main(){
    // int ans =factorial(3);
    // cout<<ans<<endl;
    // function();
    // printnumber(10);
//    cout<< sumnumber(6)<<endl;
//    cout<<sum(34)<<endl;
//    cout<<fiabinachi(8)<<endl;
vector<int>arr={1,2,3,4,5};
int arr2[]={2,1,4,3,5};
// cout<<arraysorted(arr2,5,0)<<endl;
cout<<firstoccurens(arr,0,5)<<endl;
    return 0;

}
