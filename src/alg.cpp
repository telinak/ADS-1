// Copyright 2021 NNTU-CS
#include <iostream>
int cbinsearch(int *arr, int size, int value) {
  int left = 0, first, count, last, right = size - 1, k = 0, middle;
  while (k == 0) {
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
  while ((arr[first] == value) || (first != 0))
    first -= 1;
  while (arr[last] == value) || (last != size - 1))
    last += 1;
  count = last - first + 1;
  return count;
}
