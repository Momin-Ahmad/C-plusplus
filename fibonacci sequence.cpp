#include <iostream>
using namespace std;
int main()
{
	float a=0, b=1;
	float sum=0 ;
	cout << "This is the fibonacci series :)\n";
	cout << a << endl;
	cout << b << endl;
	while (sum < 100000){

		sum = a + b;
		cout << sum <<"\t phi approaches golden ratio "<< sum / b << endl;
		a=b;
		b = sum;
	}
	system("pause");
	return 0;
}