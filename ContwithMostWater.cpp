#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int s=0;
    int e=n-1;
    int ans=0;
    int res=0;
    while(s<e)
    {

        if(arr[s]<=arr[e])
        {
            ans=arr[s]*(e-s);
            s++;
        }
        else{
            ans = arr[e]*(e-s);
            e--;
        }
        if(ans>res)
            res= ans;
    }
    cout<< res;
}
