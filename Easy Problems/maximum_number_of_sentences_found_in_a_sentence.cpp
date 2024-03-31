class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n,0),suf(n,0),ans(n);
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=abs(pre[i]-suf[i]);
        }
        return ans;
    }
};