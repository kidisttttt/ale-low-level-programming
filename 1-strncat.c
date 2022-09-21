#include<studio.h>
#include<string.h>
int main(){
  string1[100];
  string2[100];
  printf("Enter the first string:");
gets(string1);
printf ("Enter the second string:");
gets(string2);
strcat(string1,string2);
printf("string concatenation is %s /n",string1);
return 0;
}
