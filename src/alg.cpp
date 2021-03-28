// Copyright 2021 NNTU-CS
#include <iostream>
int cbinsearch(int *arr, int size, int value) {
  int k = 0;
  arr = new int [size];
  std::cin >> "Size of array:" >> size;
  for (int i = 0; i < size; ++i)
    std::cin >> arr[i];
  std::cin >> "Wanted number" >> value;
  for (int i = 0; i < size; ++i) {
    if (arr[i] == value)
      k = k + 1;
  }
  std::cout << "Count of wanted numbers in array:" << k;
  return 0; // если ничего не найдено
}
