// Copyright 2021 NNTU-CS
#include <iostream>
int cbinsearch(int *arr, int size, int value) {
  int left = 0, first -1, count, last, right = size - 1, k = 0, middle;
  while (first < 0) {
    middle = (left + right) / 2;
    if (arr[middle] == value) {
      k += 1;
      first = middle;
    }
    if (arr[middle] > value)
      right = middle - 1;
    if (arr[middle] < value)
      left = middle + 1;
  }
  for (int i = 0; first > 0; ++i) {
    if (arr[first] == value)
      first -= 1;
  }
  for (int j = 0; last < size; ++j) {
    if (arr[last] == value)
      last += 1;
  }
  count = last - first + 1;
  return count;
}
