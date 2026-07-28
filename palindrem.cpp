#include<iostream>
#include <cstring>
using namespace std;
bool ispalindram(char arra[],int n){
    int end=n-1;
    int st=0;
    while(st<end){
        if(arra[st++]!=arra[end--]){
            cout<<"not valid palindrome"<<endl;
            return false;

        }
    }
    
}
int main(){
    char arra[] = "apple";
    ispalindram(arra, strlen(arra));
    
   
    char str1[100]="Hello ";
    char str2[100]="world";
  cout<<strcmp(str1,str2);
  cout<<strcat(str1,str2);
//   cout<<str
//   string str;
//   cin>>str;
 
 
 return 0;
}