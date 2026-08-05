#include<iostream>
// #include<vector>
// #include<string>
using namespace std;
void show(){
    cout<<"show your password"<<endl;
}
int main(){
//     int age1=22;
//     char garde='A';
//     string name="Apna college";
//     float pi=3.14;
//     bool isStudent=true;
//     cout<<age1<<endl;
//     cout<<garde<<endl;
//     cout<<name<<endl;
//     cout<<pi<<endl;
//     cout<<isStudent<<endl;
//     // NOW IF else
    
//     int age;
//      cout<<"enter you age"<<endl;
//     cin>>age;
   
//     if(age>=18){
//         cout<<"you can vote ";
//     }else{
//         cout<<"you can not volte";
//     };
//     cout<<endl;
//     int n=9;
//    for(int i=0;i<n;i++){
//     cout<<i<<endl;
//    }
//    //pattern print square start
//    int length=4;
//    for(int j=0;j<length;j++){
//     for(int k=0;k<length;k++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//    }
//    show();
//    int a=10;
//    int *ptr=&a;
//    cout<<ptr<<endl;
//    int b=10;
//    int *ptr2=&b;
//    cout<<*ptr2<<endl;
//    int arr[]={1,2,3,4,5,6};
// //    int n=sizeof(int)/sizeof(arr[0]);
//     int n=6;
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
 
    int n = 3;
    int m = 4;

    int arr[n][m];

    // Input
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

   

  
   
}
