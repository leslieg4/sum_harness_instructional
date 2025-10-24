#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

#include "sums.h"

void 
setup(int64_t N, int64_t A[])
{
   printf(" inside sum_vector problem_setup, N=%lld \n", N);

   for (int64_t i = 0; i < N; i++) {
      A[i] = i; // initialize array of length N that contains values 0...N-1
   }
}

int64_t
sum(int64_t N, int64_t A[])
{
   printf(" inside sum_vector perform_sum, N=%lld \n", N);

   int64_t sum = 0; // initalize accumulator to 0

   for (int64_t i = 0; i < N; i++) {
      sum += A[i]; // add value into sum
   }

   return sum;
}

