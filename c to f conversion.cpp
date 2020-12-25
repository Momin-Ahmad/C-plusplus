#include <iostream>
using namespace std;
int main()
{ 
	int C;
	cout << "enter temperature in centrigrade"<<endl;
	cin >> C;
	int F;
	F =  ((1.8)*C)+32;
	cout << "the temperature in fahrenheit is " << F<<endl;
	system("pause");
	return 0;



}