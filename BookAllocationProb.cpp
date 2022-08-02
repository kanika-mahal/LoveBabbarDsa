#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int A[],int N,int M,int mid)
    {
        int n;
        int studentCount =1;
        int pageSum=0;
        for(int i=0;i<N;i++)
        {
            if(pageSum + A[i] <= mid )
            pageSum += A[i];
            else{
                studentCount++;
                if(studentCount >M || A[i]>mid)
                return false;
                pageSum=A[i];

            }
        }
        return true;
    }

    int findPages(int A[], int N, int M)
    {
        int s=0;
        int sum =0;
        int ans=-1;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        int e=sum;
        int mid= s+(e-s)/2;
        while(s<=e)
        {
            if(isPossible(A,N,M,mid))
            {
                ans=mid;
                e=mid-1;

            }
            else
            s=mid+1;
        mid=s+(e-s)/2;
        }
        //code here
    return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
    int m;
    cin>>m;
    Solution ob;
    cout<<ob.findPages(A,n,m)<<endl;
    }
return 0;
}
