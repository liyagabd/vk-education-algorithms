#include <iostream>
#include <vector>

std::pair<int, int> TwoSum(std::vector<int> nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while(left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    int target;

    for(int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cin >> target;

    std::pair<int, int> answer = TwoSum(nums, target);
    std::cout << answer.first << " " << answer.second;
}