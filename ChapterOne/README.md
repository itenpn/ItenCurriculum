<<<<<<< HEAD
# Iten's Curriculum

## Chapter One: How Computers Work

### Binary
Computer Science is all about solving problems. When you're solving a problem,
you have to make a choice. On a simplistic level, you either try a solution, or
don't bother with it. While humans may have a range of complexities, we can't 
express complex thoughts to a computer. To a computer, we either do an operation,
or don't. Think of a computer as a series of switches. These can be expressed as
"1" which means on, or "0" which means off. Everything on a computer is determined
by the power being turned on or off. Now imagine that we have 2 switches. Then we
could say that they are either 11, 00, 10, or 01. Each additional switch allows
us to add complexity to a computer. But that is how we can use binary to help us
make decisions. Before we can continue, let's understand how binary works.  

Binary is what we call a base 2 number system. The number you are familiar with is
base 10. In base 10 we count from digits from 0 to 9, then we replace 9 with 0 and
the next position changes from 0 to 1. We represent each position as a series of
powers. For example, the first position is 10^0, which is 1. the next position indicates
10^1, which is 10, and the next is 10^2, which is 100. We can calculate any base using
this method. For example, 789 is the same thing as 7 * 10^2 + 8 * 10^1 + 9 * 10^0, or
700 + 80 + 9 = 789. In binary 101 is the same thing as 1 * 2^2 + 0 * 2^1 + 1 * 2^0, or
4 + 0 + 1 = 5.  

### Stack and Heap
Whenever we run a program, the data from the hard drive is passed onto the 
computer's memory in the form of RAM. In RAM, there are two types of ways
we can store data: the Stack and the Heap. Imagine the stack as layers of
plates on top of each other. Whenever I want a different plate, I can remove
one layer off of the top and go down until I reach the plate that I want. To
a computer this is a repetitive task, and thus very efficient. Imagine the
heap as a bunch of plates lieing around on the table, if I want a plate, I
might know its general direction, but I can't find it unless I dig through other
plates and look for it. While the heap could store more data than the stack,
it is slower to get data out of it. For that reason, we need to limit how
much data we allocate to the heap when we want to run programs efficiently.  

Today, there may not seem like a large need to worry about efficiency. Many
programs run perfectly fast using traditionally computational heavy languages
like python, but when you're analyzing huge data sets, every ounce of speed we
can extract helps. Let's try and understand how data is allocated.  

Data can be separated into many types. The main types that enter the stack are
primative data types. These are the primitive data types:  

- Integers, and their extension Longs  
- Floating Points, and their extension Doubles  
- Characters, which have no extensions  

Each of these data types are stored as numbers. Integers are stored as raw
binary numbers, there are no distinguishing features. Floating points are
stored as both a number and decimal value. Floating points have an inherent
inaccuracy. Due to their mathematics, there can be errors as small as
.00000000001 that affect their primary operations. While for most programs
this doesn't matter, if you require accuracy, it is essential that you record
all data as an integer and not a floating point! Characters are stored as
their representative ASCII value. You can perform math on characters to convert
them into different values. Try it!  

### The Heap
The heap operates very differently from the stack. Values in the heap are not
stored as direct numerical values. Instead, we record these values as a memory
address. In essence, we must "point" to where the data is allocated. Data in
the heap consists of complex data structures. Due to this fact, we cannot perform
mathematical operations on these data structures. There are many data structures,
but these are very common:  

- Arrays  
- Strings  
- Hashmaps  
- Binary Trees  
- Linked Lists  
- Vectors  
- Enums  

Arrays are a list of information. Technically they are a matrix. Arrays bind
several pieces of data together in memory. When you reference an array in code,
you tell the computer to look at the position where the first element is located.
If you specify another element, the computer will go through the array to that 
memory address and retrieve its value. One important distinction of arrays is
that they have a limited amount of space. To qualify as an array, its space must
be declared before data can be inserted into it. Arrays can have multiple dimensions
because of their matrix behavior.  

Strings are an array of characters. They are used quite frequently in programing.
Since these values are so common, there are two types of strings. String literals
and mutable strings. String literals do not change. They are constants. When the
program stores these literals, they are actually stored on the stack, not the heap.
Mutable strings can change.  

Hashmaps are a different type of array. Instead of each element of the list having
a singular value, they have a key and value. The key is used to retrieve elements
from the array. This data structure is usually used when encrypting data, for example,
usernames as the key, and its hashed and salted password.  

Binary Trees are a different type of array. Instead of the array having an element,
each element holds two pointers to a different section of the list. This helps
efficiency by limiting how much data the computer has to sift through during a 
search. Testing against the first element would eliminate 50% of the entire data
structure! Linked Lists are a more generic type of binary tree, instead of two 
pointers, a linked list has one pointer to the next portion of the array.  

Vectors are a radically different type of array. Instead of declaring its size before
the program runs, vectors allocate memory during the operation of the program. Meaning
you can constantly add to the vector. This is useful when you have an unknown number of
objects that you want to appear. In higher level programming, this is incredibly useful.  

Enums are a different type of array. This time, an enum is a list of potential values
for data. They behave as primitive data types and are used for comparisons. This is used
to make comparisons between two different pieces of data easier.  

### Pointers
When we get data from the heap, it has to be through pointers. But we can also use
pointers to reference data from the stack. A pointer is just telling the computer
to look at a certain memory address for its value. Every time we reference a heap
data structure, we are creating a pointer. But this has useful applications for us.
Perhaps we just want to look at a piece of data, but not change it. Then pointers
are very important to us. While higher level languages can handle pointers for you,
it matters far more in systems-level programming with lower level languages such as
C, C++, Rust, or Go.  

# End of Chapter One 
=======

>>>>>>> e674611b4524e283dfde846e940f19dd43d69384
