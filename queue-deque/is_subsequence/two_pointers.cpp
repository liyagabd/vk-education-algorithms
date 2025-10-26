#include <iostream>

bool IsSubsequence(std::string a, std::string b) {
  int i = 0;
  int j = 0;
  
  while (i < a.size() && j < b.size()) {
    if (a[i] == b[j]) {
      i++;
    }
    j++;
  }

  return i == a.size(); 
}

int main() {
  std::string a, b;
  std::cin >> a >> b;
  if(IsSubsequence(a, b)) {
    std::cout << "подстрока";
  } else {
    std::cout << "не подстрока";
  }
}
