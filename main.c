#include <stdio.h>
#include "utils.h"
#include "caesar.h"

int main(){

    char a = 'a';
    char b = 'A';
    char c = '!';

    printf("1. %d\n", is_upper_letter(a));
    printf("2. %d\n", is_upper_letter(b));
    printf("3. %d\n", is_upper_letter(c));

    printf("4. %d\n", is_lower_letter(a));
    printf("5. %d\n", is_lower_letter(b));

    printf("6. %d\n", is_letter(a));
    printf("7. %d\n", is_letter(b));
    printf("8. %d\n", is_letter(c));

    printf("Upper: %c\n", to_upper('a'));                                                                                                               
    printf("Lower: %c\n", to_lower('A'));
    printf("Length: %d\n", string_length("Hello"));
    print_string("Hello");

    printf("Shift 3 A: %c\n", caesar_encrypt('A', 3));
    printf("Shift 3 D: %c\n", caesar_decrypt('D', 3));

    return 0;
}