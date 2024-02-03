#include <iostream>

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;

        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void append(const T& value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }

        current->next = newNode;
    }

    void addAfter(const T& valueToInsert, const T& valueAfter) {
        Node* newNode = new Node(valueToInsert);

        if (!head) {
            // Empty list, add as the first node
            head = newNode;
            return;
        }

        Node* current = head;
        while (current) {
            if (current->data == valueAfter) {
                // Found the node after which to insert
                newNode->next = current->next;
                current->next = newNode;
                return;
            }
            current = current->next;
        }

        std::cerr << "Value " << valueAfter << " not found in the list." << std::endl;
    }

    // Other operations like popBack(), delete, search, traverse, etc.
    Node * getHead(){
        return head;
    }


    // Destructor to free allocated memory
    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList<int> myList;
    myList.append(1);
    myList.append(2);
    myList.append(4);

    std::cout << "Original List: ";
    for (auto current = myList.getHead(); current; current = current->next) {
        std::cout << current->data << " ";
    }

    myList.addAfter(3, 2); // Insert 3 after the node with value 2

    std::cout << "\nList after addAfter(): ";
    for (auto current = myList.getHead(); current; current = current->next) {
        std::cout << current->data << " ";
    }

    return 0;
}
