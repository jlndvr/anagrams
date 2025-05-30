#include <stdio.h>
#include <string.h>

/*
Is it an anagram?
String y is an anagram of string x if y is a rearrangement of string x. This implies that y and x have the same letters with the same amount of each letter. Example: “code” and “deco” are anagrams!

Rules: We can only use 'a' 'b' 'c' 'd'
*/

int main() {

  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

  for (int i = 0; i < strlen(s1); i++) {
    if (s1[i] == 'a') counter1[0]++;
    else if (s1[i] == 'b') counter1[1]++;
    else if (s1[i] == 'c') counter1[2]++;
    else if (s1[i] == 'd') counter1[3]++;
  }
  for (int i = 0; i < strlen(s2); i++) {
    if (s2[i] == 'a') counter2[0]++;
    else if (s2[i] == 'b') counter2[1]++;
    else if (s2[i] == 'c') counter2[2]++;
    else if (s2[i] == 'd') counter2[3]++;
  }

  int flag = 1;
  for (int i = 0; i < 4; i++) {
    if (counter1[i] != counter2[i]) flag = 0;
  }

  if (flag) printf("Anagram!\n");
  else printf("Not Anagram!\n");

}
