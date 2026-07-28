#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
void toUpper(char word[],int n){
    for(int i =0;i<n;i++){
        char ch=word[i];
        if(ch>='A'&& ch<='Z'){
            continue;
        }else{
            word[i]=ch -'a'+'A';
        }
    }
}

int main(){
    char C='A';
    char B='A';
    int n=5;
    char arr[5]={'C','O','D','E'};
    for(int i=0;i<n;i++){
        cout<<arr<<
        " ";
    } 
    cout<<endl;
    // char word[30];
    // cin>>word;
    // cout<<word;
   
    cout<<(int)B<<endl;
char word[]="ApPlE";
toUpper(word,strlen(word));
cout<<word<<endl;



}