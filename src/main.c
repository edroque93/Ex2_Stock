// Enrique Díaz Roque
// IngeniaMC Exercise 2

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int solution(int a[], int n) {
  // SC O(1)
  int minBuy = INT_MAX;
  int currentProfit = INT_MIN;
  int bestProfit = 0;
  // TC O(N)
  for (int i = 0; i < n; i++) {
    currentProfit = MAX(0, a[i] - minBuy);
    minBuy = MIN(a[i], minBuy);
    bestProfit = MAX(currentProfit, bestProfit);
  }
  return bestProfit;
}

int main(int argc, char **argv) {
  if (argc == 1) {
    int a[6] = {23171, 21011, 21123, 21366, 21013, 21367};
    printf("Solution: %d\n", solution(a, 6));
  } else {
    int n = argc - 1;
    int a[n];
    for (int i = 1; i < argc; i++) {
      a[i - 1] = atoi(argv[i]);
    }
    printf("Solution: %d\n", solution(a, n));
  }
  return 0;
}
