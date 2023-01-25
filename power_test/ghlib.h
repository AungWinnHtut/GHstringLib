#pragma once
#define SPLIT_BUFFER_MAX 100 //for split_k() function limitation

int strlen_k(const char *str);
void strcpy_k(char *destination, const char *source);
void strncpy_k(char* destination, const char* source, int start_index, int end_index);
int strcmp_k(const char *str1, const char *str2);
int strncmp_k(const char* str1, const char* str2, int n);
void strcat_k(char *destination, const char *source);
char *gets_k(char *str, int buffer_size);
void left_trim_k(char *t_arr, const char *str, int count);
void split2_k(char *line, char *command, const char *str, const char ch, int count);
void split_k(char result[][100], const char* str, const char ch, int count, int* linecount);
int c2i_k(char c);
int s2i_k(const char *line, int count);
int pow_k(int base, int exp);
void clear_str_k(char *str, int count);