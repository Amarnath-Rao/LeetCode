class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int cm=1,m=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1){
                    cm++;
                }else{
                    m=max(m,cm);
                    cm=1;
                }
            }
        }
        return max(m,cm);
    }
};