/*Implement an algorithm to determine if a string has all unique characters.*/

#include<stdio.h>   //
#include<stdlib.h>  //
#include<string.h>  //

int main() {    // start of main

    char s[100];    //  declaring character array
    int n,i,j;  //  declaring the required variables

    printf("\n\nEnter a string : ");    // taking input from the user
    scanf("%s",s);  // storing the user 
    
    n = strlen(s);    //

    for(i=0;i<n;i++) {  //

        for(j=i+1;j<n;j++){     //

            if(s[i]==s[j]&&s[i]!='"') {     //
            printf("\n\nfalse");    //
            exit(0);    //
            }
        }
    }
    
    printf("\n\ntrue"); // displaying message

  return 0; // end of main

}