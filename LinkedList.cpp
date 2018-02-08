﻿
/*
Basic LinkedList where insertion is happening at the front of the list! :D
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
public:
	Node* head = new Node();

	LinkedList::LinkedList() {
		head = NULL;
	}
	void LinkedList::Insert(int data) {
		Node* temp = new Node();
		temp->data = data;
		temp->next = head;
		head = temp;
	}

	void print() {
		Node* temp = new Node();
		temp = head;
		while (temp != NULL) {
			cout << temp->data << "   " ;
			temp = temp->next;
		}
		cout << endl;
	}
};
int main() {
	LinkedList list;
	cout << "How many entires do you want to insert?";
	int n, data;
	cin >> n;
	for (int i=0; i < n; i++)
	{
		cin >> data;
		list.Insert(data);
		list.print();
	}
}