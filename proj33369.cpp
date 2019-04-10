// EGRE 246     EGRE 246     EGRE 246     EGRE 246     EGRE 246     EGRE 246     EGRE 246     EGRE 246     EGRE 246     
// Project # 3     Project # 3     Project # 3     Project # 3     Project # 3     Project # 3     Project # 3     Project # 3     
// 01/April/2019     01/April/2019     01/April/2019     01/April/2019     01/April/2019     01/April/2019     01/April/2019     01/April/2019     
// Linked Lists     Linked Lists     Linked Lists     Linked Lists     Linked Lists     Linked Lists     Linked Lists     Linked Lists     Linked Lists     
 
#include <iostream>
#include <string>
#include <vector>
#include "LList.h"

namespace egre246 {

	LList::LList() {
		LLNode *mynode = new LLNode();
		head = mynode;
		tail = mynode;
		//curr = mynode;
		size = getSize();

	};

	LList::LList(const LList& mylist) {
		head = mylist.head;
		tail = mylist.tail;
		curr = mylist.curr;
		size = mylist.getSize();
	}; // copy constructor


	int LList::getSize() const {


		const LLNode *cursor;
		size_t answer;
		answer = 0;
		for (cursor = head; cursor != NULL; cursor = cursor->next)
			++answer;
		return answer;
	};

	bool LList::isEmpty() const {
		if (head == NULL) return true;
		else return false;
	}

	;

	void LList::clear() {
		while (head != NULL) {
			LLNode *removePtr;
			removePtr = head;
			head = head->next;
			delete removePtr;
		}


	};     // deallocates all nodes; always invalidates iterator
	LList::value_type LList::get(int value) const {
		LLNode *cursor;
		size_t answer;
		answer = 0;
		for (cursor = head; cursor != NULL; cursor = cursor->next) {
			if (curr->data == value) return answer;
		}
		++answer;

	};
	// argument is index of value to return (with 0 as first
								  // item); result of using an out-of-bounds index is
								  // undefined
	void LList::add(const value_type value) {
		LLNode *insertPtr;
		insertPtr = new LLNode(value, curr->next);
		curr->next = insertPtr;


	}; // adds to end of list; always invalidates iterator
	void LList::remove(const int value) {
		LLNode *current = new LLNode();
		LLNode *previous = new LLNode();
		int stop = 0;
		current = head;
		while (current != NULL) {
			previous = current;
			if ((previous->data == value) && (stop == 0)) {
				previous->next = current->next;
				stop = 1;
			} current = current->next;
		}
	};     // argument is index of value to remove (with 0 as first
								// item); invalidates iterator if item is removed; does
								// nothing if index is not valid
	int LList::find(const value_type value) const {
		LLNode *searchPtr;
		searchPtr = head;
		int count = 0;
		while (searchPtr != NULL) {
			if (searchPtr->data == value) {
				return count;
			}
			count = count + 1;
			searchPtr = searchPtr->next;
		} return -1;
	}; // returns index of item found or -1 if item is
									  // not found

	std::string LList::toString() const {
		std::string mystring = ("");
		LLNode *searchPtr;
		searchPtr = head;
		while (searchPtr != NULL) {
			mystring = searchPtr->data;
			std::cout << mystring << ",";
			searchPtr = searchPtr->next;
		};

	}; // format: "1,2,3", or returns empty string for empty list
	LList::value_type& LList::operator[](int i) {
		int retstring = LList::get();
		return 	head[retstring].data;

	}; // does not invalidate iterator; result of using an



/*								   // out-of-bounds index is undefined; index 0 is first item
	LList::LList& operator=(LList&);      // lhs iterator is set to off list
	bool LList::operator==(const LList&) {
		while (searchPtr != NULL) {
			if (searchPtr->data == value) {
				return count;
			}
			count = count + 1;
			searchPtr = searchPtr->next;
		} return -1;

	}; // order and current position for iterators are irrelevant    Why doesnt workkkkkkkkkk

*/
	 std::ostream& operator<<(std::ostream&, const LList& celular) {
		std::string Operator;
		Operator = celular.toString();
		if (Operator.length != NULL) {
			std::cout << "[" << Operator << "]" << std::endl;

		}
		else std::cout << "[]" << std::endl;
	};
	// format: [1,2,3] , or [] for empty string


	std::string toString(const LList::value_type& no) {
		return std::to_string(no);

	}
};
