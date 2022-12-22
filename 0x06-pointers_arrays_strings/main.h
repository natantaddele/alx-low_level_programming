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
char *_strcat(char *str1, char *str2);

#endif /* MAIN_H */
