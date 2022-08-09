#include "list.h"

// `LinkedListNode` member definitions

// constructor() definition
LinkedListNode::LinkedListNode(int data, LinkedListNode *next) {
    this->data = data;
    this->next = next;
}

// `LinkedList` member definitions

// constructor() definition
LinkedList::LinkedList() {
    this->head = (LinkedListNode*)new LinkedListNode(0, nullptr);
    this->tail = nullptr;
}

// insert() definition
void LinkedList::insert(int data) {
    if (this->tail == nullptr) {
        this->tail = new LinkedListNode(data, nullptr);
        this->tail->next = this->tail;
    } else {
        auto* node = new LinkedListNode(data, this->tail->next);
        this->tail->next = node;
        this->tail = node;
    }
    this->head->data++;
}

// search() definition
int LinkedList::search(int data) const {
    if (this->size() == 0)
        return -1;

    LinkedListNode* current = this->tail->next;
    int index = 0;

    do {
        if (current->data == data)
            return index;
        current = current->next;
        index++;
    } while (current != this->tail);

    return -1;
}

// traverse() definition
int* LinkedList::traverse() const {
    if (this->size() == 0)
        return {};

    LinkedListNode* current = this->tail->next;
    int index = 0;
    int size = this->size();
    int* arr = new int[size];
    while (size--) {
        arr[index++] = current->data;
        current = current->next;
    }

    return arr;
}

// size() definition
int LinkedList::size() const {
    return this->head->data;
}

// removeByPos() definition
void LinkedList::removeByPos(int pos) {
    if (pos >= this->size())
        return;

    if (this->size() == 1) {
        this->tail = nullptr;
        this->head->data = 0;
        return;
    }

    this->tail->next = this->removeByPos(this->tail->next, pos);
}

// removeByPos() helper definition
LinkedListNode *LinkedList::removeByPos(LinkedListNode *node, int pos) {
    if (pos == 0 && node == this->tail) {
        this->tail = node->next;
        LinkedListNode* next = node->next;
        delete node;
        this->head->data--;
        return next;
    }

    if (pos == 0) {
        LinkedListNode* next = node->next;
        delete node;
        this->head->data--;
        return next;
    }
    node->next = removeByPos(node->next, pos - 1);
    return node;
}

// removeByValue() definition
bool LinkedList::removeByValue(int data) {
    if (this->search(data) == -1)
        return false;

    if (this->size() == 1) {
        this->tail = nullptr;
        this->head->data = 0;
        return true;
    }

    this->tail->next = this->removeByValue(this->tail->next, data);
    return true;
}

// removeByValue() helper definition
LinkedListNode *LinkedList::removeByValue(LinkedListNode *node, int data) {
    if (data == node->data && node == this->tail) {
        this->tail = node->next;
        LinkedListNode* next = node->next;
        delete node;
        this->head->data--;
        return next;
    }

    if (data == node->data) {
        LinkedListNode* next = node->next;
        delete node;
        this->head->data--;
        return next;
    }
    node->next = removeByValue(node->next, data);
    return node;
}

