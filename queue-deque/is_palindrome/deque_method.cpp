#include <iostream>
#include <deque>

bool IsPalindrome(std::string str) {
  std::deque<char> deque;

  for (char c : str) {
    deque.push_back(c);
  }

  while (deque.size() > 1) {
    if (deque.front() != deque.back()) {
        return false;
    }
    deque.pop_front();
    deque.pop_back();
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
