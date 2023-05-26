#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START = NULL;
public:
	void addNode();
	bool search(int rollNo, Node** previous, Node** currentr);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchData();
};

void DoubleLinkedList::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the roll number of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin >> nm;

	Node* newNode = new Node(); // step 1
	newNode->noMhs = nim; // step 2
	newNode->name = nm; // step 3

	/*insert a node in the bigining of a doubly - linked list*/
	if (START == NULL || nim <= START->noMhs) {// chack if data null
		if (START != NULL && nim == START->noMhs) {
		cout << "\nDuplicate number not allowed" << endl;
		return;
		}
	}
}