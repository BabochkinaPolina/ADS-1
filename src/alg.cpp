// Copyright 2021 NNTU-CS

int cbinsearch(int * arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int rgran = size - 1, lgran = 0, kol = 0;
  while (lgran < rgran) {
    int center = (rgran + lgran) / 2;
    if (arr[center] < value)
      lgran = center + 1;
    else
      rgran = center;
  }

  if (arr[lgran] == value) {
    while (arr[lgran] == value) {
      kol += 1;
      lgran += 1;
    }
  }

  if (kol != 0) {
    return kol;
    else
      return 0; // если ничего не найдено
  }
}
