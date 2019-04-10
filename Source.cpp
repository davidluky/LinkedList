#include <iostream>
#include <string>
#include <cstdlib>
#include <assert.h>

class SimpleNode {
public:
	int data;
	SimpleNode *next;
};


class Node {
public:
	typedef int value_type;
	Node(const value_type& initData = value_type(),
		Node* initLink = NULL) {
		data = initData; next = initLink;
	}
	void setData(const value_type& newData) { data = newData; }
	value_type getData() const { return data; }
	void setNext(Node* newLink) { next = newLink; }
	const Node* getNext() const { return next; }
	Node* getNext() { return next; }
private:
	value_type data;
	Node* next;
};

// ... (prototypes for our Linked List Toolkit will go here)

std::size_t listLength(const Node* head_ptr);
void listHeadInsert(Node*& headPtr, const Node::value_type& entry);
void listInsert(Node* previousPtr, const Node::value_type& entry);
Node* listSearch(Node* headPtr, const Node::value_type& target);
const Node* listSearch(const Node* headPtr, const Node::value_type& target);
Node* listLocate(Node* headPtr, std::size_t position);
const Node* listLocate(const Node* headPtr, std::size_t position);
void listHeadRemove(Node*& headPtr);
void listRemove(Node* previousPtr);
void listClear(Node*& headPtr);
void listCopy(const Node* sourcePtr, Node*& headPtr, Node*& tailPtr);


size_t listLength(const Node* headPtr) {
	const Node *cursor;
	size_t answer;
	answer = 0;
	for (cursor = headPtr; cursor != NULL; cursor = cursor->getNext())
		++answer;
	return answer;
}

void listHeadInsert(Node*& headPtr, const Node::value_type& entry) {
	headPtr = new Node(entry, headPtr);
}

void listInsert(Node* previousPtr, const Node::value_type& entry) {
	Node *insertPtr;
	insertPtr = new Node(entry, previousPtr->getNext());
	previousPtr->setNext(insertPtr);
}

const Node* listSearch(const Node* headPtr, const Node::value_type& target) {
	const Node *cursor;
	for (cursor = headPtr; cursor != NULL; cursor = cursor->getNext())
		if (target == cursor->getData())
			return cursor;
	return NULL;
}

Node* listLocate(Node* headPtr, size_t position) {
	Node *cursor;
	size_t i;
	assert(0 < position);
	cursor = headPtr;
	for (i = 1; (i < position) && (cursor != NULL); i++)
		cursor = cursor->getNext();
	return cursor;
}

void listHeadRemove(Node*& headPtr) {
	Node *removePtr;
	removePtr = headPtr;
	headPtr = headPtr->getNext();
	delete removePtr;
}

void listRemove(Node* previousPtr) {
	Node *removePtr;
	removePtr = previousPtr->getNext();
	previousPtr->setNext(removePtr->getNext());
	delete removePtr;
}

void listClear(Node*& headPtr) {
	while (headPtr != NULL)
		listHeadRemove(headPtr);
}


void listCopy(const Node* sourcePtr, Node*& headPtr, Node*& tailPtr) {
	headPtr = tailPtr = NULL;
	if (sourcePtr == NULL) return;
	listHeadInsert(headPtr, sourcePtr->getData());
	tailPtr = headPtr;
	sourcePtr = sourcePtr->getNext();
	while (sourcePtr != NULL) {
		listInsert(tailPtr, sourcePtr->getData());
		tailPtr = tailPtr->getNext();
		sourcePtr = sourcePtr->getNext();
	}

}



using namespace std;



int main() {

	const Node* ptr;


	Node *headPtr = new Node (1);
	Node *tailPtr;

	Node *p1 = new Node();
	Node *p2 = new Node(5);
//	Node *p3 = new Node(2, ptr);





	//adds a new item at the head of a list
	Node *list = NULL;
	for (int i = 1; i <= 5; i++) {
		listHeadInsert(list, i);
	}
	for (Node *ptr = list; ptr != NULL; ptr = ptr->getNext())
		cout << ptr->getData() << " ";
	cout << endl;


	// listInsert adds a new item anywhere in a non-empty list
		for (int i = 1; i <= 5; i++) listHeadInsert(list, i);
		listInsert(list->getNext()->getNext(), 100);
		for (Node *p = list; p != NULL; p = p->getNext())
			cout << p->getData() << " ";
		cout << endl;


		listSearch(list, 100);




	system("PAUSE");

	return 0;


}
