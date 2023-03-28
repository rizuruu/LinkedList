#include <iostream>
#include "LinkedLists.h"


int main()
{
    LinkedLists* lists = new LinkedLists();
    ListNode* head = nullptr;
    lists->MakeNode(&head, 30);
    lists->MakeNode(&head, 10);
    lists->InsertFirst(&head, 25);
    lists->PrintList(head);
    std::cout << "Hello World!\n";
}