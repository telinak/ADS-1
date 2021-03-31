// Copyright 2021 NNTU-CS
#include <iostream>
int cbinsearch(int *arr, int size, int value) {
  int l = 0, r = size - 1;
  while (r > l) {
    int m = (l + r) / 2;
    if (arr[m] < value) {
      l = m + 1;
    } else {
      if (arr[m] > value) {
        r = m - 1;
      } else {
        return m;
    }
  }
  if (arr[l] == value) {
    return l;
  } else {
    return -1;}
}
}
