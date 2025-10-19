#include <iostream>
#include <vector>

void moveZeros(std::vector<int>& arr) {
    int notZeroIndex = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != 0) {
            std::swap(arr[i], arr[notZeroIndex]);
            notZeroIndex++;
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

    moveZeros(nums);
    for(int i = 0; i < n; ++i) {
        std::cout << nums[i] << " "; 
    }
}