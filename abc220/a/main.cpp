#include <iostream>int main() {  int A, B, C;  std::cin >> A >> B >> C;  int ans;  ans = -1;  for (int i = A; i < B + 1; i++) {    if (i % C == 0) {      ans = i;      break;    }  }  std::cout << ans << std::endl;}