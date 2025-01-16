class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();

        long long total=0;
        for(auto i:nums) total+=i;

        int mini=INT_MAX;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int avg1= sum/(i+1);
            int avg2= n-i-1 ==0 ? 0:(total-sum)/(n-i-1);

            int diff=abs(avg1-avg2);
            if(diff < mini)
            {
                mini=diff;
                ans=i;
            }
        }
        return ans;
    }
};