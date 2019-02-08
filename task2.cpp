#include <fstream>
#include <iostream>
#include <string>
using namespace std;
bool isSimpleSix(int n){
	if (n >= 200000) return false;
	else{
		for (int i = 2; i * i <= n; i++){
			if (n % i == 0) return false; 
		}
	}
	return true;
}

bool fixNumber(int &n){ //изменяет число и возвращает 1, если возможно, иначе возвращает 0
	int number = n;
	int correct = 0;
	int razr = 100000;
	if (isSimpleSix(number)) return true;
	if (number / razr == 2){
		n -= razr;
		return true;
	}
	if (number % 2 == 0){
		if (number % razr == 0) n += 9;
		else n -= 1;
		return true;
	}
	number %= razr;
	razr /= 10;
	for (int i = 5; i > 0; i--){
		if (number / razr == 0 && isSimpleSix(n + 9 * razr)){
			if (correct == 0) correct = n + 9 * razr;
			else{
				cout << n <<" may be "<<correct<<" or "<<n + 9 * razr<<endl;
				return false;
			}
		}
		else if(number / razr != 0 && isSimpleSix(n - razr)){
			if (correct == 0) correct = n - razr;
			else{
				cout << n <<" may be "<<correct<<" or "<<n - razr<<endl;
				return false;
			}
		}
		number %= razr;
		razr /= 10;
	}
	n = correct;
	return true;
}
	
int main(){
	ifstream in;
	ofstream out;
	in.open("input.dat");
	out.open("output.dat");
	int n;
	while (!in.eof()){
		in >> n;
		if (fixNumber(n)) out << n << endl;
		else out << n << "*" << endl;
	}
	in.close();
	out.close();
	system("pause");
	return 0;
}
