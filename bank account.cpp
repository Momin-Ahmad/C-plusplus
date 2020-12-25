#include<iostream>
using namespace std;
class account{
private:
	int balance;
public:
	account(){
		//cout << "default constructor" << endl;
	}
	account(int money){
		balance = money;
		cout << "Initial balance is " << balance << endl;
		if (money < 0){
			money = 0;
			cout << "Invalid amount!" << endl;
		}
		//cout << "Parametrized constructor" << endl;
	}
	void credit(int money){
		if (money >= 0){
			balance += money;
			cout << "Added amount is " << money << endl;
		}
		else{
			cout << "Invalid amount for credit!" << endl;
		}
		//cout << "the new balance is " << balance << endl;
	}
	void debit(int amount){
		if (amount > balance){
			cout << "Operation not possible as requested amount exceeds current balance" << endl;
		}
		else{
			cout << "Withdrawn amount is " << amount << endl;
			balance -= amount;
			//cout << "The new balance is " << balance << endl;
		}
	}
	void getBalance(){
		cout << "The current balance is " << balance << endl;
	}
};
int main(){
	account Momin(100);
	Momin.credit(250);
	Momin.debit(150);
	Momin.getBalance();
	account Makhan(1000);
	Makhan.credit(2000);
	Makhan.debit(3500);
	Makhan.getBalance();
	system("pause");
}
