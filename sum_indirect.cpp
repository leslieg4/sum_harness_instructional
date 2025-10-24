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
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
   
   for (int64_t i = 0; i < N; i++) {
      A[i] = lrand48() % N; // initialize the array of length N to random numbers
   }
}

int64_t
sum(int64_t N, int64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);

   return 0;
}

