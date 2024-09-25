//files ; that stors data permenently   
//program to creat a file and store values into it
#include<stdio.h>
int main()
{ 
FILE *p;
int rollno =1;
char name[50]= "kanran";

p=fopen("firstfile.txt", "w"); // r instead of w inreverd
fprintf(p,"%d %s",rollno,name); //fscanf in reverse 
fclose(p);
}

