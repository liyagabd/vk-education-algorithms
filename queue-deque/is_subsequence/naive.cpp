#include <iostream>
#include <queue>

bool IsSubsequence(std::string a, std::string b) {
  int i = 0;
  int len_a = a.size();
  int len_b = b.size();

  for (int u = 0; u < len_a; ++u) {
    for (int v = 0; v < len_b; ++v) {
      if (a[u] == b[v]) {
        i++;
        break;
      }
    }
  }

  return i == len_a;
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
