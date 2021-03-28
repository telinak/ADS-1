// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int k = 0;
  cin >> "Size of array:" >> size;
  for (int i = 0; i < size; ++i)
    cin >> arr[i];
  cin >> "Wanted number" >> value;
  for (int i = 0; i < size; ++i) {
    if (arr[i] == value)
      k = k + 1;
  }
  cout << "Count of wanted numbers in array:" << k;
  return 0; // если ничего не найдено
}
