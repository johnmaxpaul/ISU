#include <iostream>
#include <locale.h>
using namespace std;

/*������. ������� �� ������ �� ��������� a,b � c ������ �������������
 ��������� �� ��������� r � s? ������� ������� ������ ���� 
 ����������� ������ ��������������.*/

int main(){
	setlocale(LC_ALL, "Russian");
	double a, b, c, s, r, brick[2], rect[2];
	do {
		cout << "������� �������� �������: ";
		cin >> a >> b >> c;
		cout << "������� ������� ��������������: ";
		cin >> s >> r;
		if (a <= 0 || b <= 0 || c <= 0 || s <= 0 || r <= 0){
			cout << "\n������������ ������� ������! ��������� ����." << endl;
		}
	}
	while (a <= 0 || b <= 0 || c <= 0 || s <= 0 || r <= 0);
	//��������� �������� �������� � ������� ��������,
	//������ ������ brick ����� ��������� ������ ����� �������� �� ��� ��������,
	//�.�. �������� ������ �������� �� ��� �� �����
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
		cout << "\n�������! ������ ��������!" << endl;
	}
	else cout << "\n������ �� ��������." << endl;
	system("pause");
	return 0;
}
