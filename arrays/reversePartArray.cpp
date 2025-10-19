#include <iostream>
#include <vector>

void ReversePartArray(std::vector<int>& arr, int left, int right) {
    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }

    return; 
}

void Solution(std::vector<int>& arr, int k) {
    int n = arr.size();

    ReversePartArray(arr, 0, n - 1);
    ReversePartArray(arr, 0, k % n - 1);
    ReversePartArray(arr, k % n, n - 1);

    return;
}

int main() {
    int n;
    std::cin >> n;
   
    std::vector<int> array(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    int k;
    std::cin >> k;

    Solution(array, k);
    for(int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
}