/*
 * WordLadder.cpp
 *
 *  Created on: March 12, 2022
 *      Author: Ashley
 */
/*
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "vector.h"
#include "queue.h"
#include "lexicon.h"
#include "simpio.h"
#include "strlib.h"

using namespace std;

string getLadder(string start, string destin){
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	Lexicon English("EnglishWords.txt");
	Vector<string> wordLadder;
	Queue<string> queue;
	queue.enqueue(start);
	while (!queue.isEmpty()){
		string firstLadder = queue.dequeue();
		string finalword = firstLadder.substr(firstLadder.length() - start.length());
		if (finalword == destin) return firstLadder;
		wordLadder += finalword;
		for (int i = 0; i < finalword.length(); i++ ){
			string temp = finalword;
			for (char& c : alpha){
				temp[i] = c;
			if (English.contains(temp)){
			int count = 0;
				for (int i = 0; i < wordLadder.size(); i++){  //if (that word has not already been used in a ladder)
					if (wordLadder[i] != temp) count += 1;
				}
				if (count == wordLadder.size()){
					string copy = firstLadder + " " + temp;
					queue.enqueue(copy);
				}
			}
		}
	}
}return "No ladder found.";
}



int main(){
	string startWord = getLine("Enter start word (RETURN to quit): ");
	while (!startWord.empty()){
	string destinationWord = getLine("Enter destination word: ");
	cout << getLadder(startWord, destinationWord) << endl;
	startWord = getLine("Enter start word (RETURN to quit): ");

	}
	return 0;
}
*/

