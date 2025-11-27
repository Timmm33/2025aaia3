///week12-2.cpp
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); /// 先有效率的排序
        for(int i=nums.size()-1; i>=2; i--) {
            /// 取出 nums[i] vs. nums[i-1] nums[i-2]
            if(nums[i] < nums[i-1] + nums[i-2]) {
                return nums[i] + nums[i-1] + nums[i-2];
            } /// 找到最大的合法三角形，把三邊加起來
        }
        return 0; /// 找不到答案
    }
};
