#include <iostream>
#include <locale.h>
using namespace std;

/*КИРПИЧ. Пройдет ли кирпич со сторонами a,b и c сквозь прямоугольное
 отверстие со сторонами r и s? Стороны кирпича должны быть 
 параллельны граням прямоугольника.*/

int main(){
	setlocale(LC_ALL, "Russian");
	double a, b, c, s, r, brick[2], rect[2];
	do {
		cout << "Введите габариты кирпича: ";
		cin >> a >> b >> c;
		cout << "Введите размеры прямоугольника: ";
		cin >> s >> r;
		if (a <= 0 || b <= 0 || c <= 0 || s <= 0 || r <= 0){
			cout << "\nНекорректные вводные данные! Повторите ввод." << endl;
		}
	}
	while (a <= 0 || b <= 0 || c <= 0 || s <= 0 || r <= 0);
	//сортируем элементы массивов в порядке убывания,
	//причём массив brick можно наполнить только двумя меньшими из трёх значений,
	//т.к. величина самого большого из них не важна
	if (a >= b && a >= c){
		if (b >= c) {
			brick[0] = b;
			brick[1] = c;
		}
		else {
			brick[0] = c;
			brick[1] = b;
		}
	}
	else if (b >= a && b >= c){
		if (a >= c) {
			brick[0] = a;
			brick[1] = c;
		}
		else {
			brick[0] = c;
			brick[1] = a;
		}
	}
	else {
		if (a >= b) {
			brick[0] = a;
			brick[1] = b;
		}
		else {
			brick[0] = b;
			brick[1] = a;
		}		
	}
	if (s >= r) {
		rect[0] = s;
		rect[1] = r;
	}
	else {
		rect[0] = r;
		rect[1] = s;
	}
	if (brick[0] <= rect[0] && brick[1] <= rect[1]){
		cout << "\nОтлично! Кирпич проходит!" << endl;
	}
	else cout << "\nКирпич не пролезет." << endl;
	system("pause");
	return 0;
}
