#include <iostream>
using namespace std;

int main() {
  int elements, summa = 0, proizv = 1;

  cout << "Введите количество элементов массива   ";
  cin >> elements;

  int array[elements];
  
  for (int i = 0; i < elements; ++i) {
    cout << "Введите " << i + 1 << " элемент массива   ";
    cin >> array [i];
    summa += array [i];
    proizv *= array [i];
  }

  cout << "Сумма элементов массива: " << summa << endl << "Произведение элементов массива: " << proizv;

  return 0;
}
// 8,11 работа кода без надписей