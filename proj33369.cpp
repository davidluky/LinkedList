// Alisson David Frangullys     Alisson David Frangullys     Alisson David Frangullys     Alisson David Frangullys     
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
		curr = mynode;
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
			curr->next =insertPtr;
		
	
		}; // adds to end of list; always invalidates iterator
	void LList::remove(const int value) {
		LLNode *removePtr;
		int stop = 0;
		while (head != NULL) {
			LLNode *searchPtr;
			searchPtr = head;
			if ((searchPtr->data == value) && (stop == 0)) {
				removePtr = searchPtr->next;
				searchPtr->next = removePtr->next;
				delete removePtr;
				stop = 1;
			}
			head = head->next;
		} 
	};     // argument is index of value to remove (with 0 as first
								// item); invalidates iterator if item is removed; does
								// nothing if index is not valid
	int LList::find(const value_type value) const {
		LLNode *searchPtr;
		searchPtr = head; 
		while (searchPtr != NULL) {
			if (searchPtr->data == value) {
				return 1;
			}
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
		} return "]";
		
	}; // format: "1,2,3", or returns empty string for empty list
	LList::value_type& operator[](int i); // does not invalidate iterator; result of using an
								   // out-of-bounds index is undefined; index 0 is first item
	LList::LList& operator=(LList&);      // lhs iterator is set to off list
	bool operator==(const LList&); // order and current position for iterators are irrelevant

	
	friend std::ostream& operator<<(std::ostream&, const LList&);
	// format: [1,2,3] , or [] for empty string


	std::string toString(const LList::value_type& no) {
		std::string mystring = ("");
		LList *Alexandre = new LList(no);
		while (no != NULL) {
			mystring = (*no).data;
			std::cout << mystring << ",";
			no = no->next;
		} return "]";
	}; // same format as LList::toString
	
}; 
