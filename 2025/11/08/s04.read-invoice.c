// Read Invoice from File and Compute Total
#include <stdio.h>

int main()
{
    printf("Enter product name: ");
    char productName[50];
    scanf("%s", productName);

    printf("Enter quantity: ");
    int quantity;
    scanf("%d", &quantity);

    printf("Enter price: ");
    float price, total = 0.0;
    scanf("%f", &price);

    total = quantity * price;

    FILE *file = fopen("invoice.txt", "w");
    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }
    fprintf(file, "Product name: %s\n", productName);
    fprintf(file, "Quantity: %d\n", quantity);
    fprintf(file, "Price: %.2f\n", price);
    fprintf(file, "Total: %.2f\n", total);
    fclose(file);
    printf("Invoice written to invoice.txt successfully.\n");
    return 0;
}
