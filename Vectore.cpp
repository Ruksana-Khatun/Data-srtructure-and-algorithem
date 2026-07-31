#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<vector<int>>matrix={{1,2,3},{3,4,6},{3,6,7}};
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix.size();j++){
            cout<<matrix[i][j]<<" " ;
        }
        cout<<endl;
    }
return 0;
}