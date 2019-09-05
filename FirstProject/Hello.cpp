/*
 * Weitong Sun
 * Partner: Xin Lian
 * 9/4/19
 *CISC220 In Class\Lab1
 *
 *  Created on: Aug 29, 2019
 *      Author: WeitongSun
 */

#include <iostream>
#include <cmath>

using namespace std;

void LineOfStars();
bool isPrime(int b);
void Sum();
int Term();
void MulTable(int row);
void MulTable2();
int CollatzConjecture(int number);
void leapYear();
void printX(int x);
void TestCC(int sml, int large);

int main(){
	int number;
	cout << "Hello World!" << endl;
	LineOfStars();
	cout << "Is the number a Prime (True =1, False=0): " << isPrime(2) << endl;
	cout << "Is the number a Prime (True =1, False=0): " << isPrime(8) << endl;
	cout << "Is the number a Prime (True =1, False=0): " << isPrime(9) << endl;
	LineOfStars();
	Sum();
	LineOfStars();
	cout << "The term that exceed 100,000 is: " << Term() << endl;
	LineOfStars();
	MulTable(5);
	cout << endl;
	MulTable(6);
	cout << endl;
	MulTable(7);
	cout << endl;
	LineOfStars();
	MulTable2();
	LineOfStars();
	//Test1
	cout << "Enter a number: " << endl;
	cin >> number;
	cout << CollatzConjecture(number) << endl;
	//Test2
	cout << "Enter a number: " << endl;
	cin >> number;
	cout << CollatzConjecture(number) << endl;
	//Test3
	cout << "Enter a number: " << endl;
	cin >> number;
	cout << CollatzConjecture(number) << endl;
	LineOfStars();
	leapYear();
	LineOfStars();
	printX(5);
	printX(4);
	printX(3);
	LineOfStars();
	TestCC(1,975);
	TestCC(2,6);
	TestCC(2,7);
	LineOfStars();
	return 0;
}

/*
 * A function that takes and returns nothing but print out a line of stars
 */
void LineOfStars(){
	cout <<"*****************************************************" << endl;
}

/*
 * A function that takes an integer, and returns a boolean value. To determine if the integer
 * is a prime number or not.
 */
bool isPrime(int b){
	int m = sqrt(b);
	int i = 2;
	while(i <= m){
		if(b%i == 0){
			return false;
			break;
		}
		i++;
	}
	return true;
}
/*
 * Function that takes and returns nothing. The function calculate the sum from 1 through
 * 300, and prints out the sum once 20 times.
 */
void Sum(){
	int total = 0;
	int term = 0;
	for(int i = 1; i <= 300; i++){
		total = total + i;
		term++;
		if(term % 20 ==0){
			cout << total << endl;
		}
	}
}
/*
 * Function takes and returns nothing. Calculate how many terms it takes for the sum starting
 * with 1 to exceeds 100,000.
 */
int Term(){
	int total=0;
	int term = 0;
	int i = 1;
	while (total <= 100000){
		total = total + i;
		term++;
		i++;
	}
	return term;
}
/*
 * Function takes one integer, and print out the multiplication Table of the integer
 * (between 1-12)
 */
void MulTable(int n){
	for(int row = 1; row <= n; row++){
		for(int col = 1; col <= n; col++){
			int result = row * col;
			cout << result << " ";
		}
		cout << endl;
	}
}

/*
 * Function that takes and returns nothing, but print out 12 multiplication tables of
 * between 1-12.
 */
void MulTable2(){
	for(int i = 1; i <= 12; i++){
		MulTable(i);
		cout<< endl;
	}
}

/*
 * Function that takes an integer and the integer will eventually reach 1 by Collatz
 * Conjecture law. The function should returns how many terms does the number takes
 * to reach 1.
 */
int CollatzConjecture(int number){
	int times = 0;
	do{
		if(number % 2 == 0){
			number = number / 2;
		}
		else{
			number = (number * 3) + 1;
		}
		times++;
	}while(number != 1);
	return times;
}

/*
 * Function that takes and returns nothing. However prints out the leap years starting
 * from 2017 through 2417.
 */
void leapYear(){
	for (int i=2017; i<= 2417; i++){
		if ( (i%4 == 0) && (i&100==0) && (i%400== 0)){
			cout<< i <<endl;
		}
		else if (i%4 == 0 && i%100!=0){
			cout<< i <<endl;
		}
	}
}

/*
 * Function that takes an integer but returns nothing. It should print out a X symbol
 * by the given integer.
 */
void printX(int x){
	int i;
	int j;
	int array[i][j];

	if(x % 2 == 0){
		x = x + 1;
	}

	for(j = 0; j < 2 * x; j++){
		for(i = 0; i < 2 * x-1; i++){
			if(i == j ||  i + j == 2*(x-1)){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
}

/*
 * The function that takes two integer (assume the first integer is smaller than the
 * second integer. This function is used to test if the Collatz Conjecture law.
 */
void TestCC(int sml, int large){
	for(int i = sml; i <= large; i++){
		CollatzConjecture(i);
	}
	cout << "Collatz Conjecture is still working!" << endl;
}











