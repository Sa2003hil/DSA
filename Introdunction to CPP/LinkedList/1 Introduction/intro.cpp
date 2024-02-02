/*

^ What is Linked List :
Linked List is a linear data structure -> collection of nodes. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.

Node : Each node of a list is made up of two items - the data and a reference to the next node. The last node has a reference to null. The entry point into a linked list is called the head of the list.

^ Why Linked List is needed ?

example : arr[10] ---> can we change the size of the array like 100 in runtime ? no.

In case of vectors we can do that but it is not efficient.

So to overcome this problem we use linked list.It is the dynamic data structure which can grow and shrink during runtime, means no memory is wasted
 

* Insertion/Deleteion requires no shifting of elements, only the adjustment of the pointer. unlike arrays where shifting is required.

*/

// ^ Linked list is mainly used in Browser Tabs and Undo/Redo functionality.

// ! Memory Space used ?
/*
It all depends upon the system architecture. If it is 32 bit system then it will take 4 bytes for each pointer and if it is 64 bit system then it will take 8 bytes for each pointer.

*/
