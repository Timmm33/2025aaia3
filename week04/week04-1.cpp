///week04-1.cpp
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; /// �@�}�l�N�ܤF�o��h�~
        while(numBottles >= numExchange){ /// �p�G�~�l�q>=�I���q�A�N�I��
            numBottles = numBottles - numExchange + 1; /// �I��1�~����
            ans ++; /// �h�ܤF�@�~
            numExchange ++; /// �I�����зǦh�@�~
        }
        return ans;
    }
};
