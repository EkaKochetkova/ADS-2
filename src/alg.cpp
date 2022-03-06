// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double ans = 1;
    if (n == 0) {
        return 1;
    }
    else {
        for (uint16_t i = 1; i <= n; ++i) {
            ans *= value;
        }
        
    }
    return ans;
}

uint64_t fact(uint16_t n) {
  uint16_t ans = 1;
    if (n == 0) {
        return 1;
    }
    else {
        for (uint16_t i = 1; i <= n; ++i) {
            ans *= i;
        }
    }
    return ans;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double ans = 1;
    for (uint16_t i = 0; i <= count; ++i) {
        ans += pown(x, i) / fact(i);
    }
    return ans;
}

double sinn(double x, uint16_t count) {
  double sum = 0;
    for (uint16_t i = 1; i <= count; ++i) {
        sum += pown((-1), (i - 1)) * pown(x, (2 * i - 1)) / fact(2 * i - 1);
    }
    return sum;
}

double cosn(double x, uint16_t count) {
   double sum = 0;
    for (uint16_t i = 1; i <= count; ++i) {
        sum += pown((-1), (i - 1)) * pown(x, (2 * i - 2)) / fact(2 * i - 2);
    }
    return sum;
}
