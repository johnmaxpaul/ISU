#include <iostream>
#include <locale.h>
using namespace std;

/*��� � ����. ����� �� ������� �������� a*b*c ��������� � 
������� �������� r*s*t? "�����" ���������� ������.*/

int main(){
	setlocale(LC_ALL, "Russian");
	double a, b, c, s, r, t, box1[3], box2[3];
	do {
		cout << "������� �������� ���������: ";
		cin >> a >> b >> c;
		cout << "������� ������� �������: ";
		cin >> s >> r >> t;
		if (a <= 0 || b <= 0 || c <= 0 || s <= 0 || r <= 0 || t <= 0){
			cout << "\n������������ ������� ������! ��������� ����." << endl;
		}
	}
	while (a <= 0 || b <= 0 || c <= 0 || s <= 0 || r <= 0);
	//��� �������� ��������� �������� �������� � ������� ��������
	if (a>=b && a>=c){
		box1[0] = a;
		if (b >= c) {
			box1[1] = b;
			box1[2] = c;
		}
		else {
			box1[1] = c;
			box1[2] = b;
		}
	}
	else if (b >= a && b >= c){
		box1[0] = b;
		if (a >= c) {
			box1[1] = a;
			box1[2] = c;
		}
		else {
			box1[1] = c;
			box1[2] = a;
		}
	}
	else {
		box1[0] = c;
		if (a >= b) {
			box1[1] = a;
			box1[2] = b;
		}
		else {
			box1[1] = b;
			box1[2] = a;
		}		
	}
	if (s >= r && s >= t){
		box2[0] = s;
		if (r >= t) {
			box2[1] = r;
			box2[2] = t;
		}
		else {
			box2[1] = t;
			box2[2] = r;
		}
	}
	else if (r >= s && r >= t){
		box2[0] = r;
		if (s >= t) {
			box2[1] = s;
			box2[2] = t;
		}
		else {
			box2[1] = t;
			box2[2] = s;
		}
	}
	else {
		box2[0] = t;
		if (s >= r) {
			box2[1] = s;
			box2[2] = r;
		}
		else {
			box2[1] = r;
			box2[2] = s;
		}		
	}
	if (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2]) cout << "\n�������! ��������� ������ � �������!" << endl;
	else cout << "\n��������� ��������� � ����� ������� �� �������." << endl;
	system("pause");
	return 0;
}
