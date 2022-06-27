def printLinkedList(head):
    temp = head
    while temp != None:
        print(temp.data)
        temp = temp.next


llist_count = int(input())

llist = SinglyLinkedList()

for _ in range(llist_count):
    llist_item = int(input())
    llist.insert_node(llist_item)

printLinkedList(llist.head)
