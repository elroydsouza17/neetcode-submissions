class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    std::vector<int> result(temperatures.size(), 0);
    std::stack<std::pair<int, int>> stack;
    for (int i = 0; i < temperatures.size(); i++) {
      while (!stack.empty() && stack.top().first < temperatures[i]) {
        result[stack.top().second] = i - stack.top().second;
        stack.pop();
      }
      stack.push({temperatures[i], i});
    }

    return result;
  }
};