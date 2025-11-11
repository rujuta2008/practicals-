#include <stdio.h>
int main() {
    int choice;
    int total = 0;
    printf("Welcome to Foodies Restaurant \n");
    printf("Menu:\n");
    printf("1. Burger        - ₹150\n");
    printf("2. Pizza         - ₹200\n");
    printf("3. Pasta         - ₹120\n");
    printf("4. Sandwich      - ₹100\n");
    printf("5. French Fries  - ₹80\n");
    printf("Enter 0 to finish ordering.\n\n");
 while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 0) {
            break;
        }switch (choice) {
            case 1:
                total += 150;
                printf("Burger added. Current total = ₹%d\n", total);
                break;
            case 2:
                total += 200;
                printf("Pizza added. Current total = ₹%d\n", total);
                break;
            case 3:
                total += 120;
                printf("Pasta added. Current total = ₹%d\n", total);
                break;
            case 4:
                total += 100;
                printf("Sandwich added. Current total = ₹%d\n", total);
                break;
            case 5:
                total += 80;
                printf("French Fries added. Current total = ₹%d\n", total);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
   printf("Total Amount = ₹%d\n", total);
    printf("Thank you for visiting Foodies \n")
  return 0;
}
