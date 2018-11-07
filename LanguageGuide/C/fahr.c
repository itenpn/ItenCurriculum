/* A Simple Celcius Calculator
 *
 * Designed by Nicholas Iten
 *
 * To run the file, you must compile it with cc and run a.out
 *
 */

#include<stdio.h>
/*These are include statements, they allow use to access the standard library and other
 *user defined libraries. All standard libraries utilize <> syntax, while user defined
 *libraries use "" instead. stdio.h allows us to output to console
 */

/*This is the space where you could add global constants to your program use
 *#define CONSTANT_NAME value_of_constant
 */

float fahr_to_celcius(float fahr);
/*In C, we must declare functions before the main, however according to ANSI standards,
 *we must put prototypes before the main function. This includes just the title of the
 *function and its parameters
 */

int main(){
  float fahr, celcius;
  /*These are variables in C. The possible primitive data types are
   *int, float, double, and char
   *you can create long int and short int if you need to maximize memory
   */
  printf("%10s %10s \n", "Fahrenheit", "Celcius");
  /*The easiest method out output is printf in C
   *printf operates very differently from other languages
   *The first input is a string with formatting syntax
   *use % followed by the operations you want to perform
   *%d represents integers, %f represents floats, %s represents strings, %c for char
   *%- will left justify %.# will round numbers %# will specify a number of spaces for the string to take up
   */
  for(int i = 0; i < 213; i++){
    /*This is a for loop
     *Other loops are switch, while, and do while
     *i in this case will only work while in this loop
     */
    fahr = i;
    celcius = fahr_to_celcius(fahr);
    printf("%10.2f %10.2f \n", fahr, celcius);
  }
  return 0;
  /*In C, you must provide the computer a return type
   *0 == success
   *1 or -1 == failure
   */
}

float fahr_to_celcius(float fahr){
  /*Since this function is declared a float, we
   *have to return a value
   */
  return 5 * (fahr - 32) / 9;
}
