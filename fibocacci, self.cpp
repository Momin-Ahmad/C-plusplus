#include<iostream>
#include <iomanip> 
using namespace std;
int main(){
	long double a = 0, b = 1;
	long double sum = 0;
	std::cout << std::setprecision(16) << sum << '\n';
	cout << a << endl << b << endl;
	while (sum < 100000000){
		sum = a + b;
		cout << sum << "\t" << sum / b << endl;
		a = b;
		b = sum;
	}
		system("pause");
		return 0;
}