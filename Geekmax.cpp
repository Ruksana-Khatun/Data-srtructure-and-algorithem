#include <iostream>
using namespace std;
int main(){
    int arr[]={3, 5, 4, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int min= arr[0];
    for(int i=0;i<n;i++ ){
        if (arr[i] > max)
            max = arr[i];
        cout << "assigning the value of " << arr[i] << " to max"<<endl;;
        if(arr[i]<min){
            min =arr[i];
        }
        cout<<"assigning the min value of" <<arr[i] << "to min "<<endl;

    }
    cout<<"min value of ="<<min<<endl;
    cout<<"max value of = "<<max<<endl;
}