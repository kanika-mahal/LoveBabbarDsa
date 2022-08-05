#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter no elements";
    cin>>n;
    int k;
    cout<<endl<<"enter key";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    unordered_map<int,int>m;
    int sum=0;
    int rem=0;
    int ans=0;
    int counter=0;
    m.insert({0,-1});
    for(int i=0;i<n;i++){

        sum += arr[i];
        rem = sum%k;
        if(rem <0)
            rem += k;
        if(m.find(rem)==m.end())
            m.insert({rem,i});
        else{
            ans= max(ans, i-m[rem]);
        }

    }
    cout<<ans;

}
