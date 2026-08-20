#include<iostream>
#include <string>
#include<vector>
using namespace std;
void mergesort(int arr ,int st, int end){
    int mid=(st+end)/2;


}
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
int tillling(int n){
    if(n==0||n==1){
        return 1;
    }
    int ans1=tillling(n-1);
    int ans2=tillling(n-2);
    return ans1+ans2;
}
void removestrings(string str ,string ans,int i,int map[26]){
    char c=str[i];
     int mapindx=(int)(c-'a');
     if(map[mapindx]==true){
        removestrings(str,ans,i+1,map);
        
     }
    //  else{
    //     removestrings(str,ans+i i+1,map);

    //  }

}

int friendpairing(int n){
    if(n==0||n==1){
        return n;
    }
   
    return friendpairing(n-1)+(n-1)*friendpairing(n-2);
    

}
void Bianrystring(int n, int lastplace,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace!=1){
        Bianrystring(n-1,0,ans+'0');
        Bianrystring(n-1,1,ans+'1');
    }else{
        Bianrystring(n-1,0,ans+'0');

    }

    
}

int main(){
    // int ans =factorial(3);
    // cout<<ans<<endl;
    // function();
    // printnumber(10);
//    cout<< sumnumber(6)<<endl;
//    cout<<sum(34)<<endl;
//    cout<<fiabinachi(8)<<endl;
// vector<int>arr={1,2,3,4,5};
// int arr2[]={2,1,4,3,5};
// // cout<<arraysorted(arr2,5,0)<<endl;
// cout<<firstoccurens(arr,0,5)<<endl;
//     return 0;
// int n=5;
// cout<<tillling(n)<<endl;
// string str="Ruksana";
// int map[26]={false};
// string ans="";
// removestrings(str ,ans,0,map);
// cout<<friendpairing(2)<<endl;
// // ABC 
// // A|B|C  1 WAYS 
// // AB
// // |AC|
// // BC 2 WAYAS 
//        3 WAYS
int arr[6]={2,5,6,1,3,4};
int n=sizeof(arr)/sizeof(arr[0]);

string ans="";

Bianrystring(3,0,ans);
return 0;
}
