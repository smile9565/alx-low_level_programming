#include"main.h"
#include<stdio.h>
 /** 
  * _isupper - define if a character is uppercase 
  * 
  * Description: Prints the alphabet with _putchar 
  * @c: charater 
  * Return: void 1 if 'c' is uppercase otherwise always 0 (sucess)
  */ 
 				 
 int _isupper(int c) 
 { 
         if (c >= 65 && c <= 90) 
                 return (1); 
         else 
                 return (0); 
 }
