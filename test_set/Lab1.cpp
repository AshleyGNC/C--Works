/*
 * Lab1.cpp
 *
 *  Created on: Feb 9, 2022
 *      Author: Ashley
 */
/*
#include <iostream>
#include <string>
#include "simpio.h"
#include "math.h"
using namespace std;



int nameDiamond(string word){
	int length = word.length();

	for(int i = 1; i <= length; i++){
		cout << word.substr(0, i) << endl;
}
	for(int i = length-1; i > 0; i--){
		for(int x = 0; x < length-i; x++){
			cout << " ";
		}
		cout << word.substr(1, i) << endl;
	}
	return 0;
}

int main(){
	string word = getLine("Please enter a word");
	nameDiamond(word);
	return 0;

}


int BMI(double h, double w){
	double height = pow(h, 2);
	double result = w/height * 703;
	cout << result;
	return 0;
}
int main(){
	cout << "Enter Person 1's information:" << endl;
	double h1 = getDouble("height (in inches)?");
	double w1 = getDouble("weight (in inches)?");
	cout << "BMI Difference:" << BMI(h1, w1) << endl;

	cout << "Enter Person 2's information:" << endl;
	double h2 = getDouble("height (in inches)?");
	double w2 = getDouble("weight (in inches)?");
	cout << "BMI Difference:" << BMI(h2, w2) << endl;
	return 0;
}
*/
