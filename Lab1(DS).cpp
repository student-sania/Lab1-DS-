#include<iostream>
using namespace std;
float add(float num1,float num2){
	return num1 + num2;
}
float sub(float num1,float num2){
	return num1 - num2;
}
float mul(float num1,float num2){
	return num1 * num2;
}
float div(float num1,float num2){
	return num1 / num2;
}
int main(){
	// Q no :1
	int a = 4;
	int b = 6;
	int sum = a + b;
	cout << "The Sum Of "<< a <<" and "<< b <<" = "<<sum <<endl;
	
	// Q no:2
	float celsius,fahrenheit;
	cout << "Enter Temperature in Celsius: ";
	cin >> celsius;
	fahrenheit = (celsius*9/5)+32;
	cout << "Temperatur in Fahrenheit: "<< fahrenheit << endl;
	
	// Q no :3
	char opr;
	float num1,num2;
	cout << "Enter Operator (+,-,*,/): ";
	cin >> opr;
	cout << "Enter number1: ";
	cin >> num1;
	cout << "Enter number2: ";
	cin >> num2;
	switch (opr){
		case '+':
			cout <<"The sum of " << num1 << " and " << num2 << " = " << add(num1,num2) << endl;
			break;
		case '-':
			cout <<"The Substraction of " << num1 << " and " <<num2 << " = " << sub(num1,num2) << endl;
			break;	
		case '*':
			cout <<"The Multiplication of " << num1 << " and " << num2 << " = " << mul(num1,num2) << endl;
			break;	
		case '/':
			cout <<"The Division of " << num1 << " and " << num2 <<" = " << div(num1,num2) << endl;
			break; 
		default:
			cout <<"Invalid Operator" << endl;
	}
	
	// Q no:4
	int n=6;
	for(int row=0; row < 2*n; row++){
		int totalcols = row >= n? 2*n - row: row;
		for(int cols=0; cols < totalcols; cols++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}