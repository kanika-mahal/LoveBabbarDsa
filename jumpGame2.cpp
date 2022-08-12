#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int jump=0;
    int pos=0;
    int des=0;
    for(int i=0;i<n-1;i++)
    {
        des=max(des,arr[i]+i);
        if(pos==i)
        {
            pos=des;
            jump++;
        }
    }
    cout<<jump;
}
