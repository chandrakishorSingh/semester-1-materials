#include <climits>
#include <exception>
#include <string>

#include "list.h"

#define MAX_SIZE 1024

using namespace std;

LinkedList::LinkedList() {
    this->tail = -1;
    this->_size = 0;
    this->data = new int[MAX_SIZE];
    this->next = new int[MAX_SIZE];

    for (int i = 0; i < MAX_SIZE; i++)
        next[i] = INT_MAX;
}

void LinkedList::insert(int value) {
    if (this->size() == 0) {
        this->tail = 0;
        this->data[this->tail] = value;
        this->next[this->tail] = this->tail;
    } else if (this->size() == MAX_SIZE) {
        std::string message = "Max size 1024 of list is reached";
        throw message;
    } else {
        int emptyIndex = 0;
        while (next[emptyIndex] != INT_MAX) {
            emptyIndex++;
        }
        this->data[emptyIndex] = value;
        this->next[emptyIndex] = this->next[this->tail];
        this->next[this->tail] = emptyIndex;
        this->tail = emptyIndex;
    }
    this->_size++;
}

bool LinkedList::search(int value) const {
    if (this->size() == 0)
        return false;

    int length = this->size();
    int head = this->next[this->tail];
    while (length--) {
        if (this->data[head] == value) {
            return true;
        }
        head = this->next[head];
    }
    return false;
}

int *LinkedList::traverse() const {
    if (this->size() == 0)
        return {};

    int length = this->size();
    int head = this->next[this->tail];
    int index = 0;
    int* arr = new int[length];
    while (length--) {
        arr[index++] = this->data[head];
        head = this->next[head];
    }
    return arr;
}

void LinkedList::removeByPos(int pos) {
    if (pos >= this->size())
        return;

    if (this->size() == 1) {
        this->next[this->tail] = INT_MAX;
        this->tail = -1;
        this->_size--;
        return;
    }

    this->next[this->tail] = this->removeByPos(this->next[this->tail], -1, pos);
}

int LinkedList::removeByPos(int nextNode, int prev, int pos) {
    if (pos == 0 && nextNode == this->tail) {
        this->tail = prev;
        int nextPos = this->next[nextNode];
        this->next[nextNode] = INT_MAX;
        this->_size--;
        return nextPos;
    }

    if (pos == 0) {
        int nextPos = this->next[nextNode];
        this->next[nextNode] = INT_MAX;
        this->_size--;
        return nextPos;
    }
    this->next[nextNode] = removeByPos(this->next[nextNode], nextNode, pos - 1);
    return nextNode;
}


bool LinkedList::removeByValue(int value) {
    if (!this->search(value))
        return false;

    if (this->size() == 1 && value == this->data[this->tail]) {
        this->next[this->tail] = INT_MAX;
        this->tail = -1;
        this->_size--;
        return true;
    }

    this->next[this->tail] = this->removeByValue(this->next[this->tail], -1, value);
    return true;
}

int LinkedList::removeByValue(int nextNode, int prev, int value) {
    if (value == this->data[nextNode] && nextNode == this->tail) {
        this->tail = prev;
        int nextPos = this->next[nextNode];
        this->next[nextNode] = INT_MAX;
        this->_size--;
        return nextPos;
    }

    if (value == this->data[nextNode]) {
        int nextPos = this->next[nextNode];
        this->next[nextNode] = INT_MAX;
        this->_size--;
        return nextPos;
    }
    this->next[nextNode] = removeByValue(this->next[nextNode], nextNode, value);
    return nextNode;
}

int LinkedList::size() const {
    return this->_size;
}
