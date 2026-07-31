#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    for(int i=0;i<5;i++){
        vec.push_back(i);
    }
cout<<"size="<<vec.size()<<endl;
cout<<"Capcity= "<<vec.capacity()<<endl;

}
