#include <iostream>
#include "Stack.h"

Stack::Stack() {
	top = -1;
}

void Stack::push(int value) {
	if(top == SIZE - 1) {
		std::cout << "Stack is full!\n";
	} else {
		++top;
		arr[top] = value;
	}
}

void Stack::pop() {
	if(isEmpty()) {
		std::cout << "Stack is empty!\n";
	} else {
		--top;
	}
}

void Stack::show_top() {
	if(isEmpty()) {
		std::cout << "Stack is empty!\n";
	} else {
		std::cout << "Element at the top is: " << arr[top] << "\n";
	}
}

void Stack::displayStack() {
	if(isEmpty()) {
		std::cout << "Stack is empty!\n";
	} else {
		for(int i = 0; i <= top; ++i) {
			std::cout << arr[i] << ", ";
		}
	}
}

bool Stack::isEmpty() {
	if(top == -1) {
		return true;
	} else {
		return false;
	}
}

