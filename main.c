#include <stdio.h>
#include <string.h>

void secret_function() {
    printf("Congratulations!\n");
    printf("You have entered in the secret function!\n");
}

void unsecure_function() {
    // Print the address of the secret function
    printf("The address of the secret function is: %p\n", secret_function);
    char buffer[64];
    printf("Enter some text: ");
    gets(buffer);
    printf("You entered: %s\n", buffer);
}

int main() {
    unsecure_function();
    return 0;
}
