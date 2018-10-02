#include <iostream>
#include <locale.h>
using namespace std;

/*КРАТНЫЕ ПАРЫ. Среди заданных целых чисел k, l, m найти пары кратных. */

int main(){
	setlocale(LC_ALL, "Russian");
	int k, l, m;
	cout << "Введите три целых числа: ";
	cin >> k >> l >> m;
	if (k == l && l == m){
		cout << k << " кратно " << k << "." << endl;
	}
	else{
		if (k % l == 0 || l % k == 0){
			if (k < l) cout << l << " кратно " << k << "." << endl;
			else  cout << k << " кратно " << l << "." << endl;
		}
		if (k % m == 0 || m % k == 0){
			if (k < m) cout << m << " кратно " << k << "." << endl;
			else  cout << k << " кратно " << m << "." << endl;
		}
		if (l % m == 0 || m % l == 0){
			if (l < m) cout << m << " кратно " << l << "." << endl;
			else  cout << l << " кратно " << m << "." << endl;
		}
	}
	system("pause");
	return 0;
}
