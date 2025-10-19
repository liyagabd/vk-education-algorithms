#include <iostream>
#include <vector>

void sort_binary_array(std::vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1; 

    while (left < right) {
        if (arr[left] == 0) {
            left++;
        } else if (arr[right] == 1) {
            right--; 
        } else {
            std::swap(arr[left], arr[right]);
            left++;
            right--;
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

    sort_binary_array(nums);
    for(int i = 0; i < n; ++i) {
        std::cout << nums[i] << " "; 
    }
}