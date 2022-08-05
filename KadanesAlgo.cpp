#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int curr=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr = max(curr+arr[i], arr[i]);
        maxi = max(maxi,curr);
    }
    cout<<maxi;

}
