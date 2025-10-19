#include <iostream>
#include <vector>

void Merge(std::vector<int>& arr1, std::vector<int>& arr2) {
    int pointer1 = arr1.size() - arr2.size() - 1;
    int pointer2 = arr2.size() - 1;
    int pointer3 = arr1.size() - 1;
    
    while (pointer2 >= 0) {
        if (pointer1 >= 0 && (arr1[pointer1] > arr2[pointer2])) {
            arr1[pointer3] = arr1[pointer1];
            pointer1--;
        } else {
            arr1[pointer3] = arr2[pointer2];
            pointer2--;
        }
        pointer3--;
    }

    return;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> arr1(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> arr1[i];
    }

    std::vector<int> arr2(m);
    for(int i = 0; i < m; ++i) {
        std::cin >> arr2[i];
    }

    Merge(arr1, arr2);
    for(int i = 0; i < n; ++i) {
        std::cout << arr1[i] << " ";
    }
}