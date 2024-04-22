
// LEET CODE : 1752 (ROTATING ARRAY)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1; //return true if cnt <= 1 else false (look the fuction is demanding "bool" output)
    }
};