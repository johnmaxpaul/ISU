#include <iostream>
#include <locale.h>
using namespace std;

/*������� �� 3. ��������, ��� ����� ������� �� 3 ����� � ������ 
�����, ����� ����� ��� ���� ������� �� 3. 
��������� ���� ������� �� ������� ��������� ������������ �����.*/

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	// ������ ���� � ��������� �� ������������
	do {
		cout << "������� ���������� �����: ";
		cin >> a;
	} 
	while (a < -999 || (a > -100 && a < 100) || a > 999);
	int b = a / 100 + a % 100 / 10 + a % 10; // b - ����� ���� ����������� ����� a
	if ((b % 3 == 0) && (a % 3 == 0)) cout << "������� ��������: � ����� ����, � ���� ����� ������� �� ���!" << endl;
	else if ((b % 3 != 0) && (a % 3 != 0)) cout << "������� ��������: �� ����� ����, �� ���� ����� �� ������� �� ���!" << endl;
	else if ((b % 3 == 0) && (a % 3 != 0)) cout << "������� �� ��������: ����� ���� ������� �� ���, � ���� ����� - ��� :(" << endl;
	else cout << "������� �� ��������: ���� ����� ������� �� ���, � ����� ��� ���� - ��� :(" << endl;
	system("pause");
	return 0;
}