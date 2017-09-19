// Enrique Díaz Roque
// IngeniaMC Exercise 2

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int solution(int a[], int n) {
  // SC O(1)
  int min_buy = INT_MAX;
  int current_profit = INT_MIN;
  int best_profit = 0;
  // TC O(N)
  for (int i = 0; i < n; i++) {
    current_profit = MAX(0, a[i] - min_buy);
    min_buy = MIN(a[i], min_buy);
    best_profit = MAX(current_profit, best_profit);
  }
  return best_profit;
}

int main(int argc, char **argv) {
  int a[6] = {23171, 21011, 21123, 21366, 21013, 21367};
  printf("Solution: %d\n", solution(a, 6));

  return 0;
}
