// Copyright 2021 NNTU-CS
#include <iostream>
int cbinsearch(int *arr, int size, int value) {
  int m = size / 2, i = 0, j = size - 1;
  while (arr[m] != value && i <= j) {
    if (value > arr[m])
      i = m + 1;
    else
      j = m - 1;
    m = (i + j) / 2;
  }
  if (i > j) return 0;
  else 
    return m + 1;
}
