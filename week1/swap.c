#include<stdio.h>

int main(){
    //swap using addition and subtraction
    printf ("\n\nswapping using +/-\n------------------------------------------");
   
    int x = 5, y= 6;
    
    printf ("\n%d %d before swapping", x, y);
    
    x+= y;     // x = x+ y -->> now x has both x and y
    y = x-y;   // y = x + y - y -->> remove y from x and assign that to y, now x has all, & y has x's intitial value
    x = x-y;   // x = x + y - x -->> remove y from x, recall that x holds all values, and y holds x's initial value

    printf ("\n%d %d after swapping", x, y);
    
    
    
    
    //Using XOR bitwise operator '^'
    
    printf ("\n\nswapping using XOR\n------------------------------------------");
    
    x = 10; y = 20;
    
    printf ("\n%d %d before swapping", x, y);
    
    x = x^y;
    y = x^y;
    x = x^y;
    
    printf ("\n%d %d after swapping", x, y);

    //Using multiplication and division
    
    printf ("\n\nswapping using multiplication and division\n------------------------------------------");
    
    x = 3; y = 5;
    printf ("\n%d %d before swapping", x, y);
    x *= y;     // x = Xi.y -->> x is now the product of both Xi and y
    y = x/y;    // y = (Xi.y)/ y -->> y is x after removing y from it, now x has Xi.y and y has Xi 
    x = x/y;    // x = (Xi.y)/ Xi -->> x now has y after removing x initial from it, as y holds Xi
    
    printf ("\n%d %d after swapping", x, y);
    
    
    //Using a temporary variable
    printf ("\n\nswapping using a temporary variable\n------------------------------------------");
    x = 15; y = 100;

    printf ("\n%d %d before swapping", x, y);
    int temp;

    temp = x; // temp now holds x
    x = y;  // put y in x
    y = temp; // put temp in y
    
    printf ("\n%d %d after swapping\n\n", x, y);
    
    return 0;
}
