/*
This project involves a program that determine whether two strings are anagrams or not.

String y is an anagram of string x if y is a rearrangement of string x.

Example: “code” and “deco” are anagrams!
*/

#include<stdio.h>
#include<string.h>
int main() {

  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  
  int flag = 0;

  // Count the characters in String 1
  for(int i = 0; i < strlen(s1); i++) {
    if(s1[i] == 'a') {
      counter1[0]++;
    }
    if(s1[i] == 'b') {
      counter1[1]++;
    }
    if(s1[i] == 'c') {
      counter1[2]++;
    }
    if(s1[i] == 'd') {
      counter1[3]++;
    }
    if(s1[i] == ' ') {
      continue;
    }
  }

  // Count the characters in String 2
  for(int j = 0; j < strlen(s2); j++) {
    if(s2[j] == 'a') {
      counter2[0]++;
    }
    if(s2[j] == 'b') {
      counter2[1]++;
    }
    if(s2[j] == 'c') {
      counter2[2]++;
    }
    if(s2[j] == 'd') {
      counter2[3]++;
    }
    if(s2[j] == ' ') {
      continue;
    }
  }

  // Compare the counts of both strings
  for(int k = 0; k < 4; k++) {
    if(counter1[k] != counter2[k]) {
      flag = 1;
    } else {
      break;
    }
  }
  
  if(flag == 1) {
    printf("Strings are not anagrams.\n");
  } else {
    printf("Strings are anagrams.\n");
  }  
}

//Output: "Strings are anagrams."

