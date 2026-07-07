#include <iostream>
using namespace std;

int maxsubarray(int *arr, int n)
{
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            int currsum = 0;

            for (int i = st; i <= end; i++)
            {
                currsum += arr[i];
            }

            cout << currsum << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {4,6,8,10,12,14};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxsubarray(arr, n);
}