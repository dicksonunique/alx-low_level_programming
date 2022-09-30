#include <stdio.h>  
/**
* print_char - Print stirng by removing the first characters
* untill it gets to the last character
* @str:pointer to the string entered
*Return: the string(0) - 1 untill it gets to the last string
*/ 
void print_char(char *str)
{
   
    while (*str !='\0')
    {
        
        puts(str);
        str++;
    }
     
}
int main()  
{  
    char s[]= "big boys don't cry";
    print_char(s);
    return 0;
   
}
