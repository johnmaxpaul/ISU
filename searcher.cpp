#include <iostream>
#include <fstream>
using namespace std;
/* возвращает истину, если число а превышает корень
10-значного числа, хранящегося в number */
bool caseOfStop(int number[10], int a){
	int n = 0;
	for (int i = 0; i < 9; i++){
		n = n * 10 + number[i];
	}
	int l = a / 10;
	return (a * l > n);
}
/* возвращает истину, если число а является делителем
10-значного числа, хранящегося в number */
bool isDivisor(int number[10], int a){
	int n = 0;
	for (int i = 0; i < 9; i++){
		n = n * 10 + number[i];
	}
	n = (n % a) * 10 + number[9];
	return (!(n % a));
}
/* возвращает истину, если 10-значное число,
хранящееся в number, является простым */
bool isPrime(int number[10]){
	bool Prime = true;
	for (int i = 2; !caseOfStop(number, i); i++){
		if (isDivisor(number, i)) Prime = false;
	}
	return Prime;
}

using namespace std;
int main(){
	int number[10];
	ifstream in;
	in.open("exp.txt");
	char a;
	// считываем файл до точки
	while (a != '.'){
		in >> a;
	}
	for (int i = 0; i < 10; i++){
		in >> a;
		number[i] = (int)a - 48;
	}
	bool success = false;
	while (!in.eof() && !success){
		if (isPrime(number)) success = true;
		else {
			do{
				in >> a;
				for (int i = 0; i < 9; i++){
					number[i] = number[i + 1];
				}
				number[9] = int(a) - 48;
			}while(number[0] == 0); //проверяем, чтобы наше 10-значное число не начиналось на 0
		}
	}
	in.close();
	cout << "First 10-digits prime in e is ";
	for (int i = 0; i < 10; i++){
		cout << number[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
