#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
        cin>>nums[i];
      int s=0;
        int e= n-1;
        int mid = s+(e-s)/2;
        while(s<e)
        {
            int count =0;
            for(int i=0;i<n;i++){
                if(nums[i]<=mid)
                    count++;
        }
            if(count<=mid)
                s=mid+1;
            else
                e=mid;
                mid = s+(e-s)/2;
        }
        cout<<s;
}

