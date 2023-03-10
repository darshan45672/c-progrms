/* Program to determine wether entered letter is a vowel or a consonant */

#include <stdio.h>

int main(void) {
  // start of main

  char str[100]; //declaring the required variables
  int i=0, vowels=0,consonants=0;
  printf("enter any string:");
  gets(str);
  while(str[i]!='\0'){
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
    vowels++;
  }
    else{
      consonants++;
    }i++;
  }
  printf("no of vowels is %d\n",vowels);
  printf("no of consonats os %d\n",consonants);
}