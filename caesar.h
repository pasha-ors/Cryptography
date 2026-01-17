#ifndef CAESAR_H
#define CAESAR_H

char caesar_encrypt(char c, int shift);
char caesar_decrypt(char c, int shift);
void caesar_encrypt_string(char* str, int shift);
void caesar_decrypt_string(char* str, int shift);

#endif