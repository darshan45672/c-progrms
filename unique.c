/*Implement an algorithm to determine if a string has all unique characters.*/

#include<stdio.h>   //
#include<stdlib.h>  //
#include<string.h>  //

int main() {    // start of main

    char s[100];    //  declaring character array
    int n,i,j;  //  declaring the required variables

    printf("\n\nEnter a string : ");    // taking input from the user
    scanf("%s",s);  // storing the user entered data in a variable named s
    
    n = strlen(s);    // calculate the length of the string using string built-in functions

    for(i=0;i<n;i++) {  // start of outer loop
        for(j=i+1;j<n;j++){     // start of inner loop
            if(s[i]==s[j]&&s[i]!="") {     // checking the condition
            printf("\n\nfalse");    // display appropriate message
            exit(0);    // terminate 
            }
        }
    }
    
    printf("\n\ntrue"); // displaying message

  return 0; // end of main

}