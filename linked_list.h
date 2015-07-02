#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	node *next;
};

class LinkedList{
private:
	int data;
	int count;
	node *n, *temp, *head;
public:
	LinkedList(){
		n = NULL;
		temp = NULL;
		head = NULL;
		count = 0;
	}
	void append(int);
	void display();
	int get(int);
	int size();
	int maxElement();
	int minElement();
};

void LinkedList::append(int data){
	n = new node;
	n->data = data;
	n->next = NULL;
	if (head == NULL)	head = n;
	if (temp != NULL)	temp->next = n;
	temp = n;
	count += 1;
}

void LinkedList::display(){
	node *t = head;
	if (head == NULL)	cout << "List is empty\n";
	else{
		while (t){
			cout << t->data << " ";
			t = t->next;
		}
	}
}

int LinkedList::size(){
	return count;
}

int LinkedList::get(int index){
	int curr = 0;
	node *t = head;
	while (t){
		if (curr == index)	return t->data;
		t = t->next;
		curr += 1;
	}
}

int LinkedList::maxElement(){
	int ma = INT_MIN;
	node *t = head;
	while (t){
		ma = max(ma, t->data);
		t = t->next;
	}
	return ma;
}

int LinkedList::minElement(){
	int mi = INT_MAX;
	node *t = head;
	while (t){
		mi = min(mi, t->data);
		t = t->next;
	}
	return mi;
}

