#include<bits/stdc++.h>

int main() {
  int T;
  std::cin >> T;

  while (T--) {
    int X, Y;
    std::cin >> X >> Y;

    while (X) {
      if (X > Y) {
        std::swap(X, Y);
      }

      X = std::gcd(X, Y);
    }

    // No need for outer check
    std::cout << Y << std::endl;
  }

  return 0;
}
