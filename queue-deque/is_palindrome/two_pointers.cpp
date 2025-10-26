#include <iostream>

bool IsPalindrome(std::string str) {
  int left = 0;
  int right = str.size() - 1;
  while (left < right) {
    if (str[left] != str[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main() {
  std::string str;
  std::cin >> str;
  if(IsPalindrome(str)) {
    std::cout << "палиндром";
  } else {
    std::cout << "не палиндром";
  }
}
