# Monty Project (0x18: C - Stacks, Queues - LIFO, FIFO)
The goal of this project is to create an interpreter for Monty ByteCodes files.

#### At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* What is LIFO and FIFO
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables
* How to work with git submodules

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
```bash
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ ./monty bytecodes/07.m 
3
2
1
2
1
1
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ 
```
### 4. swap
The opcode swap swaps the top two elements of the stack.

* Usage: swap
* If the stack is less than two element long, print L<line_number>: can't swap, stack too short, followed by a new line,
and exit with the status EXIT_FAILURE
```bash
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ ./monty bytecodes/09.m 
3
2
1
2
3
1
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ 
```
### 5. add
The opcode add adds the top two elements of the stack.

* Usage: add
* If the stack is less than two element long, print L<line_number>: can't add, stack too short, followed by a new line,
and exit with the status EXIT_FAILURE
* The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
    the top element of the stack contains the result
    the stack is one element shorter
```bash
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall

julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$ ./monty bytecodes/12.m 
3
2
1
5
1
julien@ubuntu:~/0x18. Stack (LIFO) & queue (FIFO)$
```

### 6. nop
The opcode nop doesn't do anything.

* Usage: nop

## Authors
[Ghofrane Abidi](https://twitter.com/AbidiGhofrane1), [Emna Ben Hadj Messaoud](https://twitter.com/emna_hadj)
