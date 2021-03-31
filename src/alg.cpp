// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
  int left = 0, right = size - 1, middle, search = -1;
  while (left <= right) {
    middle = (left + right) / 2;
    if (arr[middle] == value) {
      search = middle;
      break;
    }
    if (arr[middle] > value)
      right = middle - 1;
    if (arr[middle] < value)
      left = middle + 1;
  }
  if (search == -1)
    return 0;
  return middle;
}
