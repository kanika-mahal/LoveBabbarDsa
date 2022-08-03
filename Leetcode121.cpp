#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxprofit=0;
    int minprice =INT_MAX;
    for(int i=0;i<n;i++)
    {
        minprice=min(minprice,arr[i]);
        maxprofit = max(maxprofit, arr[i]-minprice);
    }
    cout<< maxprofit;
}
