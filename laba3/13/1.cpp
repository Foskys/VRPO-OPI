#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "RUS");
	string week_days[7] = { "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье" };

	int day_number;
	cout << "Введите порядковый номер дня недели (1-7): ";
	cin >> day_number;

	switch (day_number) {
	case 1:
		cout << "Название дня недели: " << week_days[0] << endl;
		break;
	case 2:
		cout << "Название дня недели: " << week_days[1] << endl;
		break;
	case 3:
		cout << "Название дня недели: " << week_days[2] << endl;
		break;
	case 4:
		cout << "Название дня недели: " << week_days[3] << endl;
		break;
	case 5:
		cout << "Название дня недели: " << week_days[4] << endl;
		break;
	case 6:
		cout << "Название дня недели: " << week_days[5] << endl;
		break;
	case 7:
		cout << "Название дня недели: " << week_days[6] << endl;
		break;
	default:
		cout << "Ошибка: введен неверный порядковый номер дня недели." << endl;
		break;
	}

	return 0;
}
