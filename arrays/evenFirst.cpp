#include <iostream>
#include <vector>

void evenFirst_void(std::vector<int>& arr) {
    int evenIndex = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            std::swap(arr[i], arr[evenIndex]);
            evenIndex++;
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

    evenFirst(nums);
    for(int i = 0; i < n; ++i) {
        std::cout << nums[i] << " "; 
    }
}