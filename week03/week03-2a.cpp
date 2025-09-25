/// week03-2a.cpp
/// р皚癬ㄓ琌タ计璽计临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; /// 0ヴ计常跑Θ0
        for(int i=0; i<nums.size(); i++) { /// Τ碭计癹伴禲碭Ω
            ans *= num[i]; /// –Ωр nums[i]秈ans柑
        } /// 计禫禫1000计碞脄
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
