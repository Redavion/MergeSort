[![Build Status](https://travis-ci.com/CS3281-vu/spring-2017-assignment-1-Redavion.svg?token=pSKwG5tYzUXp8D8eitEY&branch=master)](https://travis-ci.com/CS3281-vu/spring-2017-assignment-1-Redavion)

# Assignment 1

 **Due: January 19, 2017 11:59 PM US Central Time**. Push to github to submit the assignment
 
 **Video** - Please see the video for accepting the assignment at https://youtu.be/PHdfANlWgyQ 

In this assignment, you'll implement two basic things in C:

* A linked list.
* The mergesort algorithm.

Additionally, you'll create a Makefile for building the object files.

The goals of this assignment are 

- to re-familiarize yourself with pointers and pointer arithmetic, 
- understand when you need double pointers (\*\*), and 
- obtain a basic understanding of Makefiles.

## Tasks

The repository you cloned contains these files:

* linkedlist.h
* mergesort.h
* driver.c (helper functions and a main function)
* Makefile

You need to do the following:

1. Implement the functions in linkedlist.h in a file named linkedlist.c
2. Implement the functions in mergesort.h in a file named mergesort.c.
3. Complete the Makefile so that it builds an executable named "driver" using linkedlist.c, mergesort.c and driver.c. In other words, the "all" target of your Makefile should generate an executable file named "driver". Note that the driver.c file will not compile without implementing the linkedlist and mergesort functionality.
4. Integrate with travis-ci.  This is a continuous integration system. Using this tool we can automatically build the system (compile the source code and run the program). To complete this task sign in to Travis CI (https://travis-ci.com/) with your GitHub account, accepting the GitHub access permissions confirmation.
5. Submit your assignment by issuing the following commands:

      ```
      $ git add <any files that you have changed>
      $ git commit -m "assignment 1"
      $ git push origin master
```

# Testing your code

The main function in the driver.c reads input from standard input. This means that when you run it, it will wait for you to enter input on the command line until it encounters the "end-of-file" (EOF) marker. For example, you can type "1 2 3", press enter, type "9 8 7" press enter, and then press "Ctrl-D" and press enter (Ctrl-D is how you input the EOF marker). After you enter numbers, you can check to see that they are sorted.

While using a variety of test cases to check that the numbers you inputted are outputted in sorted order help ensures your program functions correctly, that alone does not guarantee that your implementation is "correct". In fact, thoroughly testing programs to help ensure that they are bug free is a notoriously difficult problem

# Evaluation

Your assignment will be graded according to the following criteria:

-   **40 points**: Correct implementation of the linked list and mergesort.
-   **20 points**: Correct Makefile.
-   **20 points**: Correct and insightful programming style, comments, proper formatting and indentation.  You can use any indentation tool. For example look at https://www.gnu.org/software/indent/manual/indent.html
-   **10 point**: Completion of the travis CI step.

## Helpful links:

[This link](https://github.com/CS3281-vu/lectures/blob/master/lecture-02/README.md#concept-of-compiled-executable-program) describes the concepts of executable programs and makefiles.

[This link](http://mrbook.org/blog/tutorials/make/) is a tutorial on how to create a Makefile.

[This link](https://www.ime.usp.br/~pf/Kernighan-Ritchie/C-Programming-Ebook.pdf) is the classic C programming reference. Chapter 5 will help you understand pointers.

[This link] (https://www.khanacademy.org/computing/computer-science/algorithms/merge-sort/a/overview-of-merge-sort) provides a review of the merge sort algorithm. 

# Please Note

Solutions received after the due date will be penalized at 20 percent per day as discussed in the class syllabus.

All work must be your own. Collaboration or sharing code is not permitted. It's easy to use Google to find an implementation of a linked list and mergesort, but don't do that: you're cheating yourself.
