# Iten's Curriculum

## Chapter Two: Object Oriented Programming

### The OOP Paradigm
Object oriented programming is what we call a paradigm. Paradigms
are just different methods we can use to organize our code and
create programs. Each one requires different logic to problem solve.
OOP is currently our best paradigm to solve complex problems, so
knowing how to think with objects is important. In order to be
object oriented there are several core values that must be true:  

1. Data is bound together into classes.  
2. Classes contain private data and methods that cannot be 
touched outside of the class.  
3. Classes contain methods that can access private data.  
4. The usage of private data is limited.  
5. Classes can be extended with other classes, carrying the
methods of the parent class.  

With these out of the way, we can start at the basics first.  

### Back to Data Structures
Before we can go into creating classes, we must know our data types!
In Chapter One, we learned abou the primitive data types and several
data structures. In OOP, we add another useful data structure that is
stored in the heap: the object. Objects are another way of binding
data together. We can create objects in two ways. First, we could make
a class. Second, we could make a struct. Just like any other data structure,
we cannot use mathematical operations to compare two objects.  

### Basic Math
We can separate different mathematical operations into two different types
assignments and comparisons. These are how we can assign variables.  

- `=` The assignment operator. We can use this go give the variable a value.  
- `+` The addition operator. You can add numbers or concatonate strings with this.  
- `-` The subtraction operator. You can subtract numbers with this.  
- `*` the multiplication operator. You can multiply numbers with this.  
- `/` the division operator. You can divide numbers with this.  
- `**` some languages use this to indicate exponents.  

Any of these assignment operators can be combined with the equal sign to
essentially do the mathematical operation on top of the current value. For
example, `a += 1` is the same thing as `a = a + 1`. Yes, this isn't math.
You can use the value of a variable in its own assignment. Because variables
just hold data. But often we want to do comparisons. These are the comparison
operators:  

- `>` or `>=` checks if one value is greater than another.  
- `<` or `<=` checks if one value is less than another.  
- `==` checks if one value is exactly another value.  
- `!=` checks if one value is not another value.  

### Comparisons
Often computer scientists want to utilize comparisons when making logic. Perhaps
you have your own routine where you complete logic. Like you have to be asleep in
order to wake up. Or you have to drink coffee in the morning before going to work 
or else you'll be tired. If statements and switch case statements are how we can
figure out these conditions.  

if statements take the form of `if(x){}` where x is a boolean data type. When you use
a comparison operator, you automatically return a boolean, so these tend to be the
most used. You can also add further statements using else and else if. Else if checks
against another boolean, and else just executes if all of the other if tests fail.  

Switch case statements are a type of loop. which will be covered in the next section.
These are useful for doing a check on when a value is an integer or character, and has
set values that it could be. The case statement is used to check if the variable is equal
to that value, then executes it's code. A default statement can be added in order to pass
if the other case statements fail. This is the general form:  

```
switch(x){
	case 1:
		//code
		break;
	case 2:
		//code
		break;
	default:
		//code
		break;
} 
```

x in this case is an integer or character value that we are testing. We must add break
statements for each case, or else we will have an infinite loop.  

### Looping
Often when we are solving a problem, we want to run a piece of code over and over again.
We have loops to help us complete this objective. These are the loop types most frequently
used:  

- `For` this loop is perfect for when you have a fixed number of times you want to loop.  
- `While` this loop is perfect for when you don't know how many times it will iterate.  
- `Do While` this loop is the same as a while, but will run at least once before stopping.  
- `Switch Case` loops through a list of possible comparisons and executes them.  

These loops are fairly simple to understand. First let's look into the `For` loop. This
loop changes depending on what language you use. There are two dominating styles of For
loops.  

First:    
```
for(int x = start; x < endvalue; x++){
	//code
}
```

Second:  
```
for x in array{
	//code
}
```

The first method lets you select a specific start and end value, along with letting you
select by what increment the value increases by. Both loops allow you to create a variable
within their own scope. The second method forces you to go through each element of an array.
To set specific start and end points, you have to format an array to have those values. As
a result, the variable takes the form of that array's element. This is useful in certain
situations.  

The next loops are the while and do while loops. These loops will loop an infinite number
of times, provided the boolean value that they check is true.  

```
while(x){
	//code
}
```

```
do{
	//code
}while(x);
```

As long as the value x is true, the code will run. Do loops will run regardless if x is true
at the beginning or not. But we can stop any of these loops at any time using the break keyword.
Or we can make the loop skip a step by using the continue keyword. Using these loops are essential
in programming. So get to know them well.

### Functions
While we are creating our programs, we often find that our main grows huge! Doing the same logic
repeatedly can become quickly too much of a hassle to complete. It's impossible after a while to
continue making programs if we can't section them into pieces. This is where functions come in.
Functions act as a way to separate our code. There are two types of functions, those that return
values, and those that don't. Functions have a new useful data type attributed to them: `void`.
Voids are functions that do not have a returned datatype.  

Functions tend to follow a similar trend. They contain a return type, name, and parameters. Let's
discuss each of these. Return types can be any type of data. These can be primitive data types,
collection types, voids, or even classes. The name of the function is important, we should name it
so that other programmers can easily understand what it does. Parameters are data that is passed
into the function. When you find yourself passing in large portions of data, you should probably
bind that data together. We can pass data by value or by reference. Simply value means that we can
either give the function the ability to mutate the data, or reference means to give the function
an immutable pointer to the data. This is the typical form:  
```
void FuctionName(datatype1 a, datatype2 b){
  	//code
	return(value);
}
```

### Creating Classes
In all object oriented languages, the programmer can create objects that hold data together. The
way we can create objects is through classes. Classes define what data the object holds, and the
methods that can be used to manipulate that data. We break classes up into two different parts: private
and public data. Private data holds variables that we cannot access outside of the class. This
makes sure that we cannot modify them without protections. Public data holds methods that we can
use to manipulate this data. Methods are the same thing as functions, except they are inside classes.
Typically we have methods to both get and set the private variables, and a toString function to
represent the class when it is printed to a command line.  

When we create an instance of a class, we call it an object. To create objects, we must have a public
constructor to create an instance of our class. There can be infinite constructors that take in different
parameters in order to fill up the private data. All objects are stored in the heap. This means we can 
create an infinite number of objects, all being able to bind the same data together, but each instance 
has separate variables. This is the core to creating classes. The idea that we can take our data and 
create objects. Thinking with objects is essential to understanding this paradigm.  

Another important aspect of classes are utilizing other classes. By creating general classes that can
be reused, and then specializing its functionality into separate smaller classes, we can create more
efficient code. This concept is called extension. In essence, programming languages allow us to take
another class and extend its properties. This is considered a parent and child relationship. Parent
classes cannot utilize the methods or data of child classes, but child classes can utilize the parent's
methods and data with the super function. Another type of extension is an interface. These are classes 
that do not have constructors. Therefore they are more akin to a collection of functions than a class. 
These are used moreso for event listeners that take in user input simultaneously with the program.  

OOP languages usually have this structure when defining classes:
```
class ClassName extends Parent implements Interface{

    private dataType data;
    
    public ClassName(){
        data = 0;
        //default constructor
    }
    
    public ClassName(dataType dataInput){
        data = dataInput;
        //fill constructor
    }
    
    public void setData(dataType dataInput){
        data = dataInput;
        //setter
    }
    
    public dataType getData(){
        return data;
        /getter
    }
    
    public String toString(){
        return data.toString();
        //toString
    }

}
```

### Languages are the Same!
Once we understand the basics, we can realize that nearly every language based off of OOP is the same!
Each language takes these basic concepts and implements them. Let's compare the following Java and C++
code and spot the differences.  

Example 1: Java
```java
public class Student{

    private String name;
    private int id;

    public Student(){
        name = "";
        id = 0;
    }
    
    public Student(String n, int i){
        name = n;
        id = i;
    }
    
    public void setName(String n){
        name = n;
    }
    
    public void setID(int i){
        id = i;
    }
    
    public String getName(){
        return name;
    }
    
    public int getID(){
        return id;
    }
    
    public String toString(){
        return (name + ", " + Integer.toString(id));
    }

}
```

Example 2: C++
```cpp
#include<String>

#ifndef _STUDENT_H_
#define _STUDENT_H_
class Student{
    private:
        std::String name;
        int id;
    public:
        Student();
        Student(std::String n, int i);
        void setName(std::String n);
        void setID(int i);
        std::String getName();
        int getID();
        std::String to_string();
};

Student::Student(){
    name = "";
    id = 0;
}

Student::Student(std::String n, int i){
    name = n;
    id = i;
}

void Student::setName(std::String n){
    name = n;
}

void Student::setID(int i){
    id = i;
}

std::String Student::getName(){
    return name;
}

int Student::getID(){
    return id;
}

std::String Student::to_string(){
    return (name + ", " + id.to_string());
}
#endif
```

As you can see, both pieces of code are almost identical. They share many
similarities. While you may think that they look slightly confusing, you
should be able to spot how data types are utilized and how the languages
declare private and public along with how they set up classes.

# End of Chapter Two
