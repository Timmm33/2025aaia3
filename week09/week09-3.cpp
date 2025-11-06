class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            /// 1. 從左到右
            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            top++;

            /// 2. 從上到下
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            /// 3. 從右到左（需檢查是否仍有未遍歷的列）
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }

            /// 4. 從下到上（需檢查是否仍有未遍歷的行）
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }

        return result;
    }
};
