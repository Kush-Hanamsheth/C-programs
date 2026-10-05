#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    int choice;
    int result;
    char str1[100], str2[100] ;

    while (1) 
    {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find String Length (strlen)\n");
        printf("2. Copy String (strcpy)\n");
        printf("3. Concatenate Strings (strcat)\n");
        printf("4. Compare Strings (strcmp)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        getchar(); // Consume the newline character left in the buffer

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

                printf("Length of the string: %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string to copy: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                strcpy(str2, str1);
                printf("Source String: %s\n", str1);
                printf("Destination String (Copied): %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string to append: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                result = strcmp(str1, str2);
                if (result == 0) {
                    printf("Strings are completely equal.\n");
                } else if (result > 0) {
                    printf("First string is greater than the second string lexicographically.\n");
                } else {
                    printf("First string is smaller than the second string lexicographically.\n");
                }
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please select an option between 1 and 5.\n");
        }
    }
    return 0;
}