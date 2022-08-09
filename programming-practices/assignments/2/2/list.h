class LinkedList {
private:
    int tail;
    int _size;
    int* data;
    int* next;

    int removeByPos(int nextNode, int prev, int pos);
    int removeByValue(int nextNode, int prev,  int value);
public:

    LinkedList();

    void insert(int value);

    bool search(int data) const;

    int* traverse() const;

    void removeByPos(int pos);

    bool removeByValue(int data);

    int size() const;
};

