#include <iostream>
#include <locale.h>
using namespace std;

/*����������. ������ ���������� ������ ������������ ABC �� ���������.
������� �� � ������� ������ �� ������� �������.*/

//��������� �������, ������� ���������� �������� 1, ����
//����� p ��������� � ����� ������������� ���. ������ ab,
//� -1, ���� � ������. ���� a, b � � ����� �� ����� ������, ���������� 0;
double Hspace(double a[2], double b[2], double p[2]){
	double c = -(a[0] * b[1] - a[1] * b[0]);
	double i = p[0] * (b[1] - a[1]) + p[1] * (a[0] - b[0]) + c;
	if (i > 0){
		i /= i;
	}
	else if (i < 0){
		i /= (-i);
	}
	else i = 0;
	return i;
}

int main(){
	setlocale(LC_ALL, "Russian");
	double a[2], b[2], c[2], m[2], space[3];
	do {
		cout << "������� ���������� ������� A: ";
		cin >> a[0] >> a[1]; 
		cout << "������� ���������� ������� B: ";
		cin >> b[0] >> b[1]; 
		cout << "������� ���������� ������� C: ";
		cin >> c[0] >> c[1]; 
		if (Hspace(a, b, c) == 0){
			cout << "\n����������� ������! ��������� ����." << endl;
		}
	}
	while (Hspace(a, b, c) == 0);
	//�������� ����� m, ������� �������� ���� ������ ab (���� �� �� ����������� ��� y);
	m[0] = a[0];
	m[1] = a[1] + 1;
	if (b[0] - a[0] != 0){
		//���������, ������ �� �� ab ��������� ����� c;
		if (Hspace(a, b, c) * Hspace(a, b, m) > 0){
			if (a[0] < b[0]) cout << "\n������� ������ �� ������� �������: ACB." << endl;
			else cout << "\n������� ������ �� ������� �������: ABC." << endl;
		}
		else{
			if (a[0] < b[0]) cout << "\n������� ������ �� ������� �������: ABC." << endl;
			else cout << "\n������� ������ �� ������� ������� - ACB." << endl;
		}
	}
	else {
		if (a[1] < b[1]){
			if (c[0] > a[0]) cout << "\n������� ������ �� ������� �������: ABC." << endl;
			else cout << "\n������� ������ �� ������� �������: ACB." << endl;
		}
		else{
			if (c[0] > a[0]) cout << "\n������� ������ �� ������� �������: ACB." << endl;
			else cout << "\n������� ������ �� ������� �������: ABC." << endl;
		}
	}
	system("pause");
	return 0;
}
