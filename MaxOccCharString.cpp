#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int n= s.length();
    sort(s.begin(),s.end());
    int max_count=0;
    int counts =1;
    char ans;
    for(int i=0;i<=n;i++)
    {

        if((i==n) || (s[i] != s[i-1]))
           {
               if(max_count<counts)
            {
                max_count=counts;
                ans=s[i-1];
            }
            counts=1;
           }
           else
            counts++;
    }
    cout<<ans;

}
