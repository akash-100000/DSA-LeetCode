class Solution {
public:
    int singleNumber(vector<int>& nums) {
       //The only way to solve this problem following the given constraint is to use the concept of XOR.
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};