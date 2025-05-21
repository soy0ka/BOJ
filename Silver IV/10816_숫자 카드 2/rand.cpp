// gen_input.cpp
#include <iostream>
#include <fstream>
#include <random>

int main() {
  const int N = 500000;
  const int M = 500000;
  std::ofstream out("input.txt");
  std::mt19937 rng(42); // 고정된 시드
  std::uniform_int_distribution<int> dist(-10000000, 10000000);

  out << N << '\n';
  for (int i = 0; i < N; ++i) out << dist(rng) << ' ';
  out << '\n' << M << '\n';
  for (int i = 0; i < M; ++i) out << dist(rng) << ' ';
  out << '\n';

  return 0;
}
