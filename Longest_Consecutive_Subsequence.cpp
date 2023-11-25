class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)  return 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;++i){
            mp[nums[i]]++;
        }
        int ans=1;
        for(int i=0;i<n;++i){
            if(mp.find(nums[i])!=mp.end()){
                int st=nums[i],cnt=0;
                while(mp.find(st)!=mp.end()){
                    cnt++;
                    mp.erase(st);
                    st++;
                }
                st=nums[i]-1;
                while(mp.find(st)!=mp.end()){
                    cnt++;
                    mp.erase(st);
                    st--;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
