#include <iostream>
#include <vector> 

void sortColors(std::vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            std::swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else if (nums[mid] == 2) {
            std::swap(nums[mid], nums[high]);
            high--;
        }
    }
}


int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    sortColors(nums);
    for(int i = 0; i < n; ++i) {
        std::cout << nums[i] << " "; 
    }
}