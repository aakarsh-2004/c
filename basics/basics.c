#include<stdio.h>

int main() {

    // Short datatype in c is used to store integer values from -32768 to 32767
    short number = 100;
    printf("\n%d", number);

    // There are also datatypes known as long and long long
    long num_one = 100000;
    long long num_two = 1000000000;
    printf("\n%d", num_one);
    printf("\n%d", num_two);

    // 1 byte = 8 bits
    // And n bits = (2 ^ n) numbers

    // char ch;
    // printf("Enter a character => ");
    // We use %c for defining characters which is of single word
    // scanf("%c", &ch);
    // printf("The character you entered is: %c", ch);
    // return 0;
}

