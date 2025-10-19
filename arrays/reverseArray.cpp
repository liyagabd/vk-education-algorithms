#include <iostream>
#include <vector>

void reverseArray(std::vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1; 

    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }

    return; 
}

int main() {
    int n;
    std::cin >> n;
   
    std::vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    reverseArray(nums);
    for(int i = 0; i < n; ++i) {
        std::cout << nums[i] << " "; 
    }
}