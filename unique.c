/*Implement an algorithm to determine if a string has all unique characters.*/
/*What if you cannot use additional data structures?*/

//solution

#include<stdio.h>   //
#include<stdlib.h>  //
#include<string.h>  //

int main() {    //

    char s[100];    //
    int n,i,j;  //

    printf("\n\nEnter a string : ");    //
    scanf("%s",s);  //
    
    n = strlen(s);    //

    for(i=0;i<n;i++) {  //

        for(j=i+1;j<n;j++){     //

            if(s[i]==s[j]&&s[i]!='"') {     //
            printf("\n\nfalse");    //
            exit(0);    //
            }
        }
    }

    printf("\n\ntrue");

  return 0;
}