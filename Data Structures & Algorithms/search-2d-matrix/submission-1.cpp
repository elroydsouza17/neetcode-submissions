class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int left = 0;
    int right = matrix.size() - 1;
    int mid;
    std::vector<int> output;
    while (left <= right) {
       mid = (left + right) / 2;
      if (target == matrix[mid][matrix[mid].size() - 1]) {
        // std::cout << mid << " " <<  matrix[mid].size() - 1 << std::endl;
        output.push_back(mid);
        output.push_back(matrix[mid].size() - 1);
        return true;
      } else if (target < matrix[mid][matrix[mid].size() - 1]) {
        right = mid;
        if (left == right) {
          int left_col = 0;
          int right_col = matrix[left].size() - 1;
          int mid_col;
          while(left_col <= right_col) {
            mid_col = (left_col + right_col) / 2;
            if (target == matrix[left][mid_col]) {
            //   std::cout << mid << " " << mid_col << std::endl;
              output.push_back(mid);
              output.push_back(mid_col);
              return true;
            } else if (target > matrix[left][mid_col]) {
              left_col = mid_col + 1;
            } else {
              right_col = mid_col - 1;
            }
          }
          return false;
        }
      } else {
        left = mid + 1;
        if (left == right) {
          int left_col = 0;
          int right_col = matrix[left].size() - 1;
          int mid_col;
          while(left_col <= right_col) {
            mid_col = (left_col + right_col) / 2;
            if (target == matrix[left][mid_col]) {
            //   std::cout << left << " " << mid_col << std::endl;
              output.push_back(left);
              output.push_back(mid_col);
              return true;
            } else if (target > matrix[left][mid_col]) {
              left_col = mid_col + 1;
            } else {
              right_col = mid_col - 1;
            }
          }
          return false; 
        }
      }
    }

    if (output.size()) {
        return true;
    }
    return false;
    }
};
