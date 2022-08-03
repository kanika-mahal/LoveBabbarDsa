#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++)
        cin>>arr[i];
    int l=0, mid =0, h=n-1;
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            swap(arr[l],arr[mid]);
            l++;
            mid++;
            continue;
        }
        if(arr[mid]==1)
        {mid++;
        continue;
        }
        if(arr[mid]==2)
        {
            swap(arr[mid], arr[h]);
            h--;
            continue;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}
