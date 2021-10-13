/**
 * @file 1.cpp
 * @author Park Jiwon (park@jiwon.me)
 * @brief
 * @version 0.1
 * @date 2021-10-13
 *
 * @copyright Copyright (c) 2021
 *
 */

 /**
  * Write code to find the n th to last element of a singly linked list.
  */

#include <iostream>

class LinkedListNode {
public:
    LinkedListNode* next = NULL;
    int data;

    LinkedListNode(int d) {
        data = d;
    }

    void appendToTail(int d) {
        LinkedListNode* end = new LinkedListNode(d);
        LinkedListNode* n = this;
        while (n->next != NULL) {
            n = n->next;
        }
        n->next = end;
    }
};

LinkedListNode* nthToLast(LinkedListNode* head, int n) {
    if (head->next == NULL) return NULL;
    if (head->data == n) return head;
    return nthToLast(head->next, n);
}

int main() {
    LinkedListNode* linkedList = new LinkedListNode(1);
    linkedList->appendToTail(8);
    linkedList->next->appendToTail(3);
    linkedList->next->next->appendToTail(13);

    std::cout << nthToLast(linkedList, 5)->data << std::endl;
}