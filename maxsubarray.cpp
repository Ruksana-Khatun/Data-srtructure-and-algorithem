#include<iostream>
#include <climits>
using namespace std;

int maxsubarr(int *arr, int n) {
    int maxSub = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += arr[end];
            if (currSum > maxSub) {
                maxSub = currSum;
            }
        }
    }

    return maxSub;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<< maxsubarr(arr,n);


    

}
