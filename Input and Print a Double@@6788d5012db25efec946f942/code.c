#include <stdio.h>

char* welcome() {
    return "You entered: 3.1415";
}

int main() {
    printf("%s", welcome());
    return 0;
}