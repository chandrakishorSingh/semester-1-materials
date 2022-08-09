#include "iostream"

#include "list.h"

using namespace std;

int main() {
    LinkedList& list = *new LinkedList();

    // fill numbers 1-50 in list
    for (int i = 0; i < 50; i++) {
        list.insert(i);
    }

    // display the content and size of lists
    cout << "contents of list are as follows" << endl;
    int* arr = list.traverse();
    for (int i = 0; i < list.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    cout << "size of list: " << list.size() << endl;

    // search 49 in list
    cout << "is 49 present ? " << (list.search(49) ? "yes" : "no") << endl;

    // remove 49 from the list
    list.removeByValue(49);

    // search 49 again and display the size
    cout << "is 49 present ? " << (list.search(49) ? "yes" : "no") << endl;
    cout << "size of list after deleting 49 is: " << list.size() << endl;

    // remove the 4th element and display the contents of list
    cout << "remove 4th element" << endl;
    list.removeByPos(3);
    cout << "contents of list are as follows" << endl;
    arr = list.traverse();
    for (int i = 0; i < list.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    cout << "size of list " << list.size() << endl;

    return 0;
}