#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "enter a number x" << endl;
	cin >> x;
	if (x % 3 == 0)
	{
		cout << "the number x is a multiple of 3" << endl;
	}
	else{
		cout << "the number x is not a multiple of 3" << endl;
	}
	if (x % 5 == 0){
		cout << "the number x is a multiple of 5 " << endl;
	}
	else{
		cout << "the number x is not a multiple of 5" << endl;
	}
	system("pause");
	return 0;
}
