// progt is plandtome or not in pointers 

#include<stdio.h>
int main()

{

char str[50];
printf("enter the string to be checked");
scanf("%s", &srt);
  
  char*p ,*q;
  p= &str;
  p=q;
  while (*p !='\0')
  {
  p++;
  }
  p--;
  while (p>q)
  { 
  if(*p!=*q)
  { 
  printf("the siting is not palindrome");
  return 0;
  }
  }
}