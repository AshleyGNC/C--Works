/*
 * ListIntNode.h
 *
 *  Created on: Apr 19, 2022
 *      Author: Ashley
 */

#ifndef LISTINTNODE_H_
#define LISTINTNODE_H_

template<typename T>
struct ListNode{
	T val;
	ListNode* next;

	ListNode(T data = 0, ListNode*ptr = nullptr){
		val = data;
		next = ptr;
	}

};

#endif /* LISTINTNODE_H_ */
