# Monty Project (0x18: C - Stacks, Queues - LIFO, FIFO)
The goal of this project is to create an interpreter for Monty ByteCodes files.

## Authors
[Ghofrane Abidi](https://twitter.com/AbidiGhofrane1), [Emna Ben Hadj Messaoud](https://twitter.com/emna_hadj)

## Requirements
* Allowed editors: vi, vim, emacs
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You allowed to use a maximum of one global variable
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called monty.h
* Don't forget to push your header file
* All your header files should be include guarded
* You are expected to do those tasks in the order shown in the project
* The repository monty should be added as a submodule to your holbertonschool-low_level_programming repository,
 under the name 0x18-stacks_queues_lifo_fifo 

## Compilation
* Your code will be compiled this way:
```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
``` 

## Mandatory Tasks
### 1. push, pall (Mandatory) 

The opcode push pushes an element to the stack.

* Usage: push <int>
* where <int> is an integer
* if <int> is not an integer or if there is no argument to push, print the message L<line_number>: usage: push integer, followed by a new line, 
 and exit with the status EXIT_FAILURE
where is the line number in the file
* You don't have to deal with overflows. Use the atoi function

The opcode pall prints all the values on the stack, starting from the top of the stack.

* Usage pall
* Format: see example
* If the stack is empty, don't print anything
```bash
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$
```
### 2. pint

The opcode pint prints the value at the top of the stack, followed by a new line.

* Usage: pint
* If the stack is empty, print L<line_number>: can't pint, stack empty, followed by a new line, and exit with the status EXIT_FAILURE
```bash
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ ./monty bytecodes/06.m 
1
2
3
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ 
```
### 3. pop
The opcode pop removes the top element of the stack.

* Usage: pop
* if the stack is empty, print L<line_number>: can't pop an empty stack, followed by a new line, and exit with the status EXIT_FAILURE
