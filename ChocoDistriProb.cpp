#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int mini = INT_MAX;
    for(int i=0;i<n-m+1;i++)
    {
        int d = arr[i+m-1] - arr[i];
        mini = min(mini,d);
    }
    cout<< mini;
}

