/// week03-2a.cpp
/// ��}�C���_�ӡA�ݬO���ơB�t�ơA�٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; /// �]��0������ơA���ܦ�0
        for(int i=0; i<nums.size(); i++) { /// �ݦ��X�ӼơA�j��]�X��
            ans *= num[i]; /// �C���� nums[i]���ians��
        } /// �Ʀr�V���V�j�A1000�ӼƦr�A����@�b�A�N�z���F
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
