#include <fstream>
using namespace std;
//проверяем на простоту
bool isSimpleSix(int n){
	if (n >= 200000) return false;
	else{
		for (int i = 2; i * i <= n; i++){
			if (n % i == 0) return false; 
		}
	}
	return true;
}
//выдаем вариант исправления, если есть. Если нет, возвращаем 0
int getVariant(int n, int razr){ 
	int digit = (n / razr) % 10;
	if (digit == 0 && isSimpleSix(n + 9 * razr)) return n + 9 * razr;
	else if (digit != 0 && isSimpleSix(n - razr)) return n - razr;
	else return 0;
}
//Возвращаем истину и исправляем, если возможно. Иначе возвращаем ложь
bool fixNumber(int &n){
	int correct = 0;
	int variant = 0;
	int razr = 100000;
	if (isSimpleSix(n)) return true;
	if (n / razr == 2){
		n -= razr;
		return true;
	}
	razr /= 10;
	while(razr>=1){
		if (correct == 0) correct = getVariant(n, razr);
		else if (getVariant(n, razr) != 0) return false;
		razr /= 10;
	}
	n = correct;
	return true;
}
	
int main(){
	ifstream in;
	ofstream out;
	in.open("input.dat");
	if (in.fail()) return 1;
	out.open("output.dat");
	if (out.fail()) return 2;
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
