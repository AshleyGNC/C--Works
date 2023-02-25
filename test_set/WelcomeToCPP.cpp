/*
 * WelcomeToCPP.cpp
 *
 *  Created on: Feb 15, 2022
 *      Author: Ashley
 */
/*
#include <iostream>
#include <string>
#include "random.h"
using namespace std;

string change;
int h = 0;
int t = 0;
int h_count = 0;

int main(){
	for (int i = 0; h_count < 3; i++){
		cout << "Flip: ";
		if (randomChance(.50)){
			change = "Heads";
			h += 1;
			h_count += 1;

		}else{
			change = "Tails";
			t += 1;
			h_count = 0;
		}
		cout << change << endl;
	}

	cout << "It took " << t+h << " flips to get 3 consecutive heads";
	return 0;
}
*/
/*
#include <iostream>
#include <string>
#include "simpio.h"
#include "queue.h"
using namespace std;


int main(){
	Queue<string> mySchedule;
	while(true){
		string activity = getLine("Enter an activity [to stop press enter]: ");
		if (activity == "") break;
		mySchedule.enqueue(activity);
	}
	cout << "To Do: " << endl;
	while(!mySchedule.isEmpty()){
		cout << mySchedule.dequeue() << endl;

	}

	return 0;
}
*/



