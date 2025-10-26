#include <iostream>
#include <queue>

bool IsSubsequence(std::string a, std::string b) {
  std::queue<int> q;
  for (char c : a) {
    q.push(c);
  }
  for (char c : a) {
    if (q.front() == c) {
      q.pop();
    }
  }
  return q.empty();
}

int main() {
  std::string a, b;
  std::cin >> a >> b;
  if(IsSubsequence(a, b)) {
    std::cout << "подсрока";
  } else {
    std::cout << "не подстрока";
  }
}
