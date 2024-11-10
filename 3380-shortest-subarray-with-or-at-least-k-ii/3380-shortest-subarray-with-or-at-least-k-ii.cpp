class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>bitCount(32,0);
        int cur=0,l=0,minlen=INT_MAX;
        for(int r=0;r<n;r++){
            cur=cur|nums[r];
            for(int bit=0;bit<32;bit++){
                if(nums[r]&(1<<bit)){
                    bitCount[bit]++;
                }
            }
            while(l<=r && cur>=k){
                minlen=min(minlen,r-l+1);
                int u=0;
                for(int bit=0;bit<32;bit++){
                    if(nums[l]&(1<<bit)){
                        bitCount[bit]--;
                    }if(bitCount[bit]>0){
                        u|=(1<<bit);
                    }
                }
                cur=u;
                l++;
            }
        }
        return minlen==INT_MAX?-1:minlen;
    }
};