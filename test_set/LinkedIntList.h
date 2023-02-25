/*
 * LinkedIntList.h
 *
 *  Created on: Apr 19, 2022
 *      Author: Ashley
 */
/*
#ifndef LINKEDINTLIST_H_
#define LINKEDINTLIST_H_


#include "Vector.h"
#include "ListIntNode.h"

template<typename T>
class LinkedIntList{
public:
	LinkedIntList();
	LinkedIntList(Vector<T> input);
	~LinkedIntList();
	int getsize() const;
	void printList();
	ListNode<T>* front;

private:
	int size;

};

//LinkedIntList::LinkedIntList(Vector<T> data){

template<typename T>
LinkedIntList<T>::~LinkedIntList(){
	ListNode<T> *curr = front;
	ListNode<T> *tmp;
	while(curr != nullptr){
		tmp = curr->next;
		delete curr;
		curr = tmp;
	}
}


#endif /* LINKEDINTLIST_H_ */
