#include <iostream>

using namespace std;

int main() {
  int finger_number;

  cout << "Введите порядковый номер пальца: ";
  cin >> finger_number;
 
  switch (finger_number) {
    case 1: {
      cout << "Мизинец";
      break;
    }
    case 2: {
      cout << "Безымянный палец";
      break;
    }
    case 3: {
      cout << "Средний палец";
      break;
    }
    case 4: {
      cout << "Безымянный палец";
      break;
    }
    case 5: {
      cout << "Указательный палец";
      break;
    }
    default: {
      cout << "Неверный номер пальца";
      break;
    }
  }

  return 0;
}