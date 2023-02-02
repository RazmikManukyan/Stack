#ifndef Stack_h
#define Stack_h
#define SIZE 100

class Stack {
private:
	int top;
	int arr[SIZE];
public:
	Stack();

	void push(int);
	void pop();
	void show_top();
	void displayStack();
	bool isEmpty();
	
};

#endif
