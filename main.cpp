#include <bits/stdc++.h>

using namespace std;

int reverseArray(int arr[],int s, int e)
{
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = {3,8,5,2,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,0,n-1);
    printArray(arr,n);
    return 0;

}
