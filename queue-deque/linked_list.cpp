#include <iostream>

struct Node {
  int value = 0;
  Node* next = nullptr;
};

struct LinkedList {
  Node* head = nullptr;

  LinkedList() = default;

  ~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
      Node* next = current->next;
      delete current;
      current = next;
    }
  }

  void append(int value) {
    Node* new_head = new Node;
    new_head->value = value;
    new_head->next = head;
    head = new_head;
  }

  void print() {
    Node* temp = head;
    std::cout << "[";
    while (temp != nullptr) {
      std::cout << temp->value;
      temp = temp->next;
      if (temp != nullptr) {
        std::cout << ", ";
      }
    }
    std::cout << "]" << std::endl;
  }

  bool hasCycle() {
    if (head == nullptr || head->next == nullptr) {
      return false;
    }

    Node* slow = head;
    Node* fast = head->next;
    while (slow != fast) {
      if (fast == nullptr || fast->next == nullptr) {
        return false;
      }
      slow = slow->next;
      fast = fast->next->next;
    }
    return true;
  }

  void reverse() {
    Node* previous = nullptr;
    Node* current = head;

    while (current != nullptr) {
      Node* next = current->next;
      current->next = previous;
      previous = current;
      current = next;
    }

    head = previous;
  }

  void remove(int value) {
    Node* dummy = new Node;
    dummy->next = head;
    Node* previous = dummy;
    Node* current = head;

    while (current != nullptr) {
        if (current->value == value) {
            previous->next = current->next;
            delete current;
            current = previous->next;
        } else {
            previous = current;
            current = current->next;
        }
    }

    head = dummy->next;
    delete dummy;
  }

  int MiddleNode() {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->value;
  }
};

int main() {
  LinkedList a;

  a.append(2);
  a.append(1);
  a.append(2);
  a.append(3);
  a.remove(2);

  a.reverse();
  a.print();
  std::cout << a.MiddleNode();
}