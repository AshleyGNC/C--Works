/*
 * testing.cpp
 *
 *  Created on: Feb 6, 2022
 *      Author: Ashley
 */



/*

//
#include <iostream>
#include "vector.h"
using namespace std;

struct ListNode{
bla bla bla
}

ListNode* vectorToLinkedList(Vector<int> data){
	if(data.isEmpty()) return nullptr;
	ListNode head = new ListNode{data[0], nullptr};
	ListNode *prev = &head;
	for (int i = 1; i < data.size(); i++){
		ListNode tmp = {data[i], nullptr};
		prev.next = &tmp;
		prev = &tmp;
	}
return &head;
}
//GET VALUE AT THE GIVEN INDEX
 int get(ListNode* front, int index){
 int size = size(head);
 if(index<0 || index >= size){
 error("the index is out of bounda");
 }
 for (int i = 0; i < index; i++){
 curr = curr->next;
 }
return curr->val;
}

//APPENDS THE GIVEN VALUE TO THE END OF THE LIST | PASS IT BY REFERENCE!!!
 * void add(ListNode* &head, int data){
 * ListNode* newNode = new ListNode(data, nullptr);
 * ListNode* current = head;
 * if (head == nullptr) head = newNode;
 * while(current->next != nullptr){
 * current = current->next;
 * }
 * }
 */

/*REMOVES VALUE AT GIVEN INDEX FROM THE LINKEDLIST
 * void remove(ListNode *&head, int index){
 * if(index<0 || index >= size){
 error("the index is out of bounda");
 }
 ListNode *curr = head;
 if (index == 0){
 head = head->next;
 }else{
 for (int i = 0; i < index-1; i++){
 curr = curr->next;
 }
 toDelete = curr->next;
 curr->next = curr->next->next;

 delete toDelete;
 }


INSERT VALUE
void insert(ListNode* &head, int index, int value){
if (index<0 || index>size(head))perror("index out of bound");
listNode *newNode =  new ListNode(value, nullptr);

if(index == 0){
newNode -> next = head;
head = newNode;
}else{
ListNode *curr = head;
for(int i =0; i < index-1; i++){
curr = curr->next;
}
newNode->next = curr->next;
curr->next = newNode;

}
int main{
printList(ptr); //to print the list made

 */

