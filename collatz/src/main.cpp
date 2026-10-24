#include <cstdio>

long long nums_in_collatz{0u};
long long num{0u};
long long nums_before_collatz{0u};

void collatz(auto &n) {
  auto local{n};
  while (local > 1) {
    if (local & 1) {
      local = (local * 3) + 1;
    } else {
      local /= 2;
    }
    ++nums_before_collatz;
  }
}
int main() {
  std::printf("===COLLATZ===\n");
  std::printf("Introduce the number: ");
  if (1 != std::scanf("%8lld", &num)) {
    std::fprintf(stderr, "Bad input\n");
    return 1;
  }
  collatz(num);
  std::printf("%8lld Numbers before the collatz\n"
              "The conjeture persists\n",
              nums_before_collatz);
}
