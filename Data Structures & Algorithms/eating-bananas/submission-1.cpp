class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int hours_taken = 0;
    int right = piles[0];
    int mid;
    bool max_hours_exceeded = false;
    int left = 0;
    for (int i = 0; i < piles.size(); i++) {
      if (piles[i] > right) {
        right = piles[i];
      }
    }

    while (right > left + 1) {
      max_hours_exceeded = false;
      hours_taken = 0;
      mid = (left + right) / 2;

      for (int i = 0; i < piles.size(); i++) {
        int banana_in_pile = piles[i];
        hours_taken += banana_in_pile / mid;
        if (banana_in_pile % mid > 0) {
          hours_taken++;
        }

        // std::cout << "Num of bananas: " << banana_in_pile << "\n";
        // std::cout << "speed per hour: " << mid << "\n";
        // std::cout << "hours taken: " << hours_taken << "\n";

        if (hours_taken > h) {
          max_hours_exceeded = true;
          break;
        }
        // std::cout << "LEFT: " << left << "\n";
        // std::cout << "RIGHT: " << right << "\n";
      }

      if (max_hours_exceeded) {
        left = mid;
      } else {
        right = mid;
      }

    }
    // std::cout << "MIn speed: " << right << "\n";
    return right;
    }
};
