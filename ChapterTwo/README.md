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

### Creating Classes
In all object oriented languages, the programmer can create objects that hold data together. The
way we can create objects is through classes. Classes define what data the object holds, and the
methods that can be used to manipulate that data. We break classes up into two different parts: private
and public data. Private data holds variables that we cannot access outside of the class. This
makes sure that we cannot modify them without protections. Public data holds methods that we can
use to manipulate this data. Methods are the same thing as functions, except they are inside classes.
Typically we have methods to both get and set the private variables, and a toString function to
represent the class when it is printed to a command line.
