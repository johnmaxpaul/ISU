#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

/*������ ����������. ����� �� �� ������� ��������� ������� r 
�������� ��� ������������� ��������� � ��������� a*b � �*d? */

int main(){
	setlocale(LC_ALL, "Russian");
	double a, b, c, d, r, t;
	//������ �������� ��������������� � ������ ���������
	//� ��������� �� ��������������� ��������	
	do{
		cout << "������� ����� � ������ ������� ��������������: ";
		cin >> a >> b;
		if (a <= 0 || b <= 0){
			cout << "\n������������ ������� ������! ��������� ����." << endl;
		}
	}
	while (a <= 0 || b <= 0);
	do{
		cout << "������� ����� � ������ ������� ��������������: ";
		cin >> c >> d;
		if (c <= 0 || d <= 0){
			cout << "\n������������ ������� ������! ��������� ����." << endl;
		}
	}
	while (c <= 0 || d <= 0);
	do{
		cout << "������� ������ �������� ���������: ";
		cin >> r;
		if (r <= 0){
			cout << "\n������������ ������� ������! ��������� ����." << endl;
		}
	}
	while (r <= 0);
	//����������������� �������� ���, ����� b � d ���� ������� ���������������
	if (b < a){
		t = a;
		a = b;
		b = t;
	}
	if (d < c){
		t = c;
		c = d;
		d = t;
	}
	//���������, �� ��������� �� ���� ������������� ������, ����
	//����������� �� ���� �������� �����, "������" � ���������� 
	//�������� ��������� (����������� ������������)
	if (sqrt(pow(r, 2) - pow(b / 2, 2)) + sqrt(pow(r, 2) - pow(d / 2, 2)) > a + c) 
	cout << "\n��, ��� ����� �������������� ����� �������� \n�� �������� ��������� ������� " << r << "." << endl;
	else
	cout << "\n���, �������� ��� ����� �������������� \n�� �������� ��������� ������� " << r << " �� ���������." << endl;
	system("pause");
	return 0;
}
