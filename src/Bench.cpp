#include "Bench.hpp"

#include <chrono>
#include <iostream>

namespace cbird {
  void Bench(benchPtr a, benchPtr b, int iters) {
    typedef std::chrono::high_resolution_clock HRC;
    typedef HRC::time_point time_point;

    time_point a_start = HRC::now();

    for (int i = 0; i < iters; ++i) {
      a(i);
    }

    time_point a_end = HRC::now();

    time_point b_start = HRC::now();

    for (int i = 0; i < iters; ++i) {
      b(i);
    }

    time_point b_end = HRC::now();

    const auto ms =   std::chrono::duration_cast<std::chrono::nanoseconds>(a_end - a_start);
    const auto ms_b = std::chrono::duration_cast<std::chrono::nanoseconds>(b_end - b_start);
    std::cout << iters << " iterations on case A: " << (ms.count() / 1000000.0) << " ms" << std::endl;
    std::cout << iters << " iterations on case B: " << (ms_b.count() / 1000000.0) << " ms" << std::endl;
  }
}
