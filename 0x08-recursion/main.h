#ifndef MAIN_H                                                 
#define MAIN_H                                                 
                                                               
#include <stdio.h>
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);                                                               
void positive_or_negative(int i);                              
int largest_number(int a, int b, int c);                       
void print_remaining_days(int month, int day, int year);       
int convert_day(int month, int day);                           
void print_times_table(int n);                             
void reset_to_98(int *n);
char *_strcat(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);

#endif /* MAIN_H */    
