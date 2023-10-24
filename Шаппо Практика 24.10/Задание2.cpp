#include <iostream>
#include <string>

using namespace std;

int main() {

 setlocale(0, "");
 string schedule[7] = 
 { 
"Понедельник: Зал", 
"Вторник: Учеба", 
"Среда: Кфс", 
"Четверг: Дота", 
"Пятница: Кардио", 
"Суббота: гулянки", 
"Воскресенье: отдых" 
 };

 int day;
 cout << "Введите порядковый номер дня недели: ";
 cin >> day;


 cout << schedule[day - 1] << endl;

 return 0;
}