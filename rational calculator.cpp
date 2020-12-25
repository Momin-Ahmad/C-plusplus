#include<iostream>
using namespace std;
class rational{
private:
	int num;
	int den;
	int HCF;
public:
	rational(){
		num = 2;
		den = 4;
		hcf(num, den);
		while (HCF != 1){
			reduce();
		}
	}
	rational(int a){
		num = a;
		den = 1;
	}
	rational(int a, int b){
		hcf(a, b);
		if (a <= b&&a != 0 && b%a == 0 && a != 1){
			num = a;
			den = b;
			while (HCF != 1){
				reduce();
			}
		}
		else{
			num = a;
			den = b;
		}
	}
	void hcf(int a, int b){
		HCF = 0;
		for (int i = 1; i <= abs(a); i++){
			if (a%i == 0 && b%i == 0){
				HCF = i;
			}
		}
		if (HCF == 0){
			HCF = 1;
		}
	}
	void reduce(){
		int tempa = num / HCF;
		int tempb = den / HCF;
		num = tempa;
		den = tempb;
		hcf(num, den);
	}
	void add(rational num1, rational num2){
		int lcm = num1.den*num2.den;
		num = num1.num*lcm / num1.den + num2.num*lcm / num2.den;
		den = num1.den*num2.den;
		hcf(num, den);
		while (HCF != 1){
			reduce();
		}
	}
	void subtract(rational num1, rational num2){
		int lcm = num1.den*num2.den;
		num = num1.num*lcm / num1.den - num2.num*lcm / num2.den;
		den = num1.den*num2.den;
		hcf(num, den);
		while (HCF != 1){
			reduce();
		}
	}
	void multiply(rational num1, rational num2){
		num = num1.num*num2.num;
		den = num1.den*num2.den;
		hcf(num, den);
		while (HCF != 1){
			reduce();
		}
	}
	void divide(rational num1, rational num2){
		num = num1.num*num2.den;
		den = num1.den*num2.num;
		hcf(num, den);
		while (HCF != 1){
			reduce();
		}
	}
	void display(){
		if (num == 0){
			cout << "0" << endl;
		}
		else if (den != 1){
			cout << num << "/" << den << endl;
		}
		else{
			cout << num << endl;
		}
	}
	void displayf(){
		cout << (float)num / den << endl;
	}
};
int main(){
	rational myNum(1);
	myNum.display();
	rational myNum1(3);
	rational result;
	result.divide(myNum, myNum1);
	result.displayf();
	system("pause");
}
