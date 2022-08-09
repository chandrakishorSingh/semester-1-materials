class LinkedListNode {
public:
    int data;
    LinkedListNode* next;

    LinkedListNode(int data, LinkedListNode* next);
};

class LinkedList {
private:
    LinkedListNode* removeByPos(LinkedListNode* node, int pos);
    LinkedListNode* removeByValue(LinkedListNode* node, int data);

public:
    // head will store the number of elements in the list
    LinkedListNode* head;
    // tail will point to last element in the list
    LinkedListNode* tail;

    LinkedList();

    void insert(int data);

    int search(int data) const;

    int* traverse() const;

    void removeByPos(int pos);

    bool removeByValue(int data);

    int size() const;
};

