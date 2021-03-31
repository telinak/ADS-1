// Copyright 2021 NNTU-CS
#include <iostream>
int cbinsearch(int *arr, int size, int value) {
  int left = 0, right = size - 1, k = 0, middle;
  while (right > left) {
    middle = (left + right) / 2;
    if (arr[middle] == value)
      k += 1;
    if (arr[middle] > value)
      right = middle - 1;
    else
      left = middle + 1;
  }
  return k;
}
