# Assignment 2: Queue and List Design

## Queue Design

### Goal: 

Implement a queue structure using linked lists that allows us to add, remove, and peek. The queue is FIFO, so, probably no need for add/remove/peek functions at some nth position.

### Requirements: 

Queue should hold int? values, should be somewhat dynamic, should follow FIFO order.

### Tools/Targets/Backup:

- No specific OS requirements, source code should compile according to c++ 11 standards
- Using code editor, g++ compiler (part of gcc suite)
- Within c++ language, using nodes to create linked list
	* struct (public by default) vs class
	* pointers?
- Testing will center around making sure push/pop methods add and return in the correct order, popping from an empty queue should be handled, possible overflow handling? 
- Code will be backed up using git/github repository

### Breaking Down the Problem

- Node struct or class
	* holds two values
		- data held
		- pointer to next node
	* ends with ;

- Queue structure
	* two node attributes/data members to keep track of beginning and ending elements
		- "head" pointer is initialized as null
		- "last" pointer is initialized as null

	* push/add method
		- receives some value that will be stored in linked list
		- node created holding that value, and pointer being set to null (as it placed at end of queue)
		- if linked list is empty, null head/last, the new node is set to both front and back
		- if linked list is not empty, the previous last node's "next" pointer is set to address of new node
			* new node is set as last node
	
	* pop/remove method
		- does not receive value
		- check for empty list
		- head node value is held in a created return variable?
		- head pointer is set to value of old head pointer's next value
		- returns the value

	* peek
		- checks if empty
		- for first element value, returns data attribute of first Node struct
		- for other element value, perhaps using counted loop, could access node->next values and keep iterating till it got to correct position

### Sequence of events

1. node class/struct is created
2. queue class/struct is created
3. main function is created
4. a queue object instantiated
5. values added to that object using push/add method
6. values peeked with method
7. values removed with method
		
