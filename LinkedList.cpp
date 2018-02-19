/*
Basic LinkedList where insertion is happening at the nth position of the list! :D
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "interviewPractise.h"
using namespace std;


struct Node {
	int data;
	Node* next; //pointer that points to another node! :D
};

class LinkedList {

private:
	Node* head;
	//Node* tail;

public:
	//Node* head = new Node();  Doing it this way would cause memory leaks! :(

	LinkedList::LinkedList() {
		head = NULL;
	}
	void LinkedList::Insert(int data) {
		Node* temp = new Node();
		temp->data = data;
		temp->next = head;
		head = temp;
	}

	void LinkedList::InsertNth(int data, int pos) {
		Node* temp = new Node();
		temp->data = data;
		temp->next = NULL;
		if (pos == 1) {
			temp->next = head;
			head = temp;
			return;
		}
		Node* temp2 = head;
		for (int i = 1; i < pos - 1; i++) {
			temp2 = temp2->next;
		}
		temp->next= temp2->next;
		temp2->next = temp;
	}
	void Reverse() {
		Node* curr;
		Node* next;
		Node* prev = NULL;
		curr = head;
		while(curr != NULL) {
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
	}

	void Delete(int n) {
		Node* temp = head;
		if (n == 0) {
			head = temp->next;
			delete(temp);

			return;
		}
		for (int i = 0; i < n - 1; i++) {
			temp = temp->next;
		}
		Node* temp2 = temp->next;
		temp->next = temp2->next;
		delete temp2;
	}

	void print() {
		Node* temp;
		temp = head;
		while (temp != NULL) {
			cout << temp->data << "   ";
			temp = temp->next;
		}
		cout << endl;
	}
};
int main() {
	LinkedList list;
	/*cout << "How many entires do you want to insert?";
	int n, data;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> data;
		list.Insert(data);
		list.print();
	}*/
	list.InsertNth(10, 1);
	list.InsertNth(2, 1);
	list.InsertNth(3, 2);
	list.InsertNth(4, 4);
	list.print();

}
