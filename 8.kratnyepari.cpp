#include <iostream>
#include <locale.h>
using namespace std;

/*������� ����. ����� �������� ����� ����� k, l, m ����� ���� �������. */

int main(){
	setlocale(LC_ALL, "Russian");
	int k, l, m;
	cout << "������� ��� ����� �����: ";
	cin >> k >> l >> m;
	if (k == l && l == m){
		cout << k << " ������ " << k << "." << endl;
	}
	else{
		if (k % l == 0 || l % k == 0){
			if (k < l) cout << l << " ������ " << k << "." << endl;
			else  cout << k << " ������ " << l << "." << endl;
		}
		if (k % m == 0 || m % k == 0){
			if (k < m) cout << m << " ������ " << k << "." << endl;
			else  cout << k << " ������ " << m << "." << endl;
		}
		if (l % m == 0 || m % l == 0){
			if (l < m) cout << m << " ������ " << l << "." << endl;
			else  cout << l << " ������ " << m << "." << endl;
		}
	}
	system("pause");
	return 0;
}
