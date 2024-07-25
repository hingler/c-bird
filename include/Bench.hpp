#ifndef CBIRD_BENCH_H_
#define CBIRD_BENCH_H_

namespace cbird {
  typedef void (*benchPtr)(int);

  void Bench(
    benchPtr a,
    benchPtr b,
    int iters
  );
}

#endif // CBIRD_BENCH_H_
