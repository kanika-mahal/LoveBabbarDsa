#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    sort(arr,arr+n);
    int ans = arr[n-1]-arr[0];
    int smallest = arr[0]+k;
    int tallest = arr[n-1]-k;
    int ma,mi;
    for(int i=0;i<n;i++)
    {
        mi= min(smallest,arr[i+1]-k);
        ma= max(tallest,arr[i]+k);
        if(mi<0)
            continue;
        ans= min(ans,ma-mi);


    }
    cout<<ans;
}
