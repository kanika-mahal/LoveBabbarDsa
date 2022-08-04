#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i =0;i<n;i++)
        cin>>nums[i];

        if(n<=1)
            cout<< n;
        int i=0;
        for(int j =1;j<n;j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i]= nums[j];
            }
        }
        for(int i =0;i<n;i++)
            cout<<nums[i];

}
