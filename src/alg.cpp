// Copyright 2021 NNTU-CS
#include <iostream>
int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  for (int i = 0; i < size; ++i) {
    if (arr[i] == value)
      count = count + 1;
  }
  std::cout << "Count of wanted numbers in array:" << count;
}
