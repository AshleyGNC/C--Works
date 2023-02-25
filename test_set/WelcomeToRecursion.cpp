/*
 * WelcomeToRecursion.cpp
 *
 *  Created on: Apr 8, 2022
 *      Author: Ashley

#include <iostream>
#include <string>
#include"string.h"
using namespace std;

int nChoosek(int n, int k){
	//base
	if (n==0 && k==0){
		return 1;
	}

	//recursion
	//bounds
	if (k == 0)
		return nChoosek(n-1, k);
	if (k == n)
		return nChoosek(n-1, k-1);

	return nChoosek(n-1, k-1) + nChoosek(n-1, k);

}

string intToString(int n){
	if (n == 0) return "0";
	if (n < 0) return "-" + intToString(abs(n));
	int digit = n%10;
	char ch = char(digit + '0');
	if (n/10 == 0){
		string str(1, ch);
		return str;
	}
	return intToString(n/10) += ch;
}

int stringToInt(string s){
	if (s.substr(0,1) == "-") return -1 * stringToInt(s.substr(1));
	char ch = s.back();
	int val = ch - '0';
	if (s.size() == 1) return val;
	string newS = s.substr(0, s.length()-1);
	return val + 10*stringToInt(newS);
}

int main(){
	cout << nChoosek(6, 5) << endl;
	cout << intToString(-60) << endl;
	cout << stringToInt("-533") << endl;

	return 0;
}
*/

