class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int rem=0;
        int ans=0;
        vector<int> count(k);
        count[0] =1;
        for(int a: nums)
        {
            rem = (rem +a%k+k)%k;
            ans += count[rem];
            ++count[rem];
        }
        return ans;
    }
};
