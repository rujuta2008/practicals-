#include <stdio.h>
#include <string.h>

// Define a union for the variable data fields
union BookDetails {
    char title[100];
    char author[50];
    float price;
    int issued_flag;
};

// Define the main struct for the book
struct Book {
    int accession_no;
    union BookDetails details;
};

int main() {
    struct Book book;

    printf("Enter accession number: ");
    scanf("%d", &book.accession_no);

    getchar(); // to clear newline after accession number

    printf("Enter book title: ");
    fgets(book.details.title, sizeof(book.details.title), stdin);
    book.details.title[strcspn(book.details.title, "\n")] = '\0';

    printf("Enter author name: ");
    fgets(book.details.author, sizeof(book.details.author), stdin);
    book.details.author[strcspn(book.details.author, "\n")] = '\0';

    printf("Enter book price: ");
    scanf("%f", &book.details.price);

    printf("Is the book issued? (1 for Issued, 0 for Available): ");
    scanf("%d", &book.details.issued_flag);

    // Display entered details
    printf("\nBook Details:\n");
    printf("Accession Number : %d\n", book.accession_no);
    printf("Title           : %s\n", book.details.title);
    printf("Author          : %s\n", book.details.author);
    printf("Price           : ₹%.2f\n", book.details.price);
    printf("Issued Status   : %s\n", (book.details.issued_flag) ? "Issued" : "Available");

    return 0;
}
