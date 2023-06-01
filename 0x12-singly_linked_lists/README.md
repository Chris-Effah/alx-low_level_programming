task 0
A function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
If str is NULL, print [0] (nil)


task 1
A function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);


task 2
A function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated


task 3
A function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated


task 4
A function that frees a list_t list.
Prototype: void free_list(list_t *head);


task 5
A function that prints You're beat! and yet, you must allow,\nI bore my house
upon my back!\n before the main function is executed.


task 6
A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
You are only allowed to use the printf function
You are not allowed to use interrupts
Your program will be compiled using nasm and gcc:
