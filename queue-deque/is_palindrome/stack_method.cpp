#include <iostream>
#include <stack>

bool IsPalindrome(std::string str) {
  std::stack<char> stack;

  for (char c : str) {
    stack.push(c);
  }

  for (char c : str) {
    if (c != stack.top()) {
        return false;
    }
    stack.pop();
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
