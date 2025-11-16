#include <stdio.h>
#include <string.h>

struct Beverage
{
    char name[50];
    float price;
    int quantity;
};

struct Beverage bs[10];
int size = 3;

void printMenu()
{
    printf("\n---- Baverage Store Manager ----\n");
    printf("1. Add new beverage.\n");
    printf("2. Display all beverages.\n");
    printf("3. Sort beverages by price (ascending).\n");
    printf("4. Search for a beverage by name.\n");
    printf("5. Update quantity of a beverage.\n");
    printf("6. Remove a beverage by name.\n");
    printf("7. Save to file.\n");
    printf("8. Load from file.\n");
    printf("9. Exit\n");
};

void printAllItems()
{
    printf("\nAll items: %d\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("---------------------\n");
        printf("Name: %s\n", bs[i].name);
        printf("Price: %.2f\n", bs[i].price);
        printf("Quantity: %d\n", bs[i].quantity);
    }
}

void bubbleSort()
{
    for (int step = 0; step < size - 1; step++)
    {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; i++)
        {
            if (bs[i].price > bs[i + 1].price)
            {
                struct Beverage temp = bs[i];
                bs[i] = bs[i + 1];
                bs[i + 1] = temp;
                swapped = 1;
            }
        }

        // if no swap => sort done
        if (swapped == 0)
        {
            break;
        }
    }
}

void initValue()
{
    strcpy(bs[0].name, "Salmon");
    bs[0].price = 21.3;
    bs[0].quantity = 20;

    strcpy(bs[1].name, "Tuna");
    bs[1].price = 43.3;
    bs[1].quantity = 10;

    strcpy(bs[2].name, "Crab");
    bs[2].price = 30.3;
    bs[2].quantity = 25;
}

int searchByName(char *name)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(bs[i].name, name) == 0)
        {
            return i;
        }
    }
    return i;
}

int main()
{

    int choice;

    initValue();

    FILE *fp = NULL;

    while (1)
    {
        printMenu();

        printf("Your option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Input name: ");
            scanf("%s", bs[size].name);

            printf("Input price: ");
            scanf("%f", &bs[size].price);

            printf("Input quantity: ");
            scanf("%d", &bs[size].quantity);

            printf("Item added successfully!\n");
            size++;
            break;

        case 2:
            printAllItems();
            break;

        case 3:
            bubbleSort();
            printf("Sorted successfully:\n");
            printAllItems();
            break;

        case 4:
        {
            printf("Input name: ");
            char search_name[50];
            scanf("%49s", search_name);
            int index = searchByName(search_name);
            if (index != size)
            {
                printf("\n-- Item found!\n");
                printf("- Name: %s\n", bs[index].name);
                printf("- Price: %.2f\n", bs[index].price);
                printf("- Quantity: %d\n", bs[index].quantity);
            }
            else
            {
                printf("\n-- Item not found!\n");
            }
            break;
        }
        case 5:
        {
            printf("Input name: ");
            char search_name_update[50];
            scanf("%49s", search_name_update);
            int index_update = searchByName(search_name_update);
            if (index_update != size)
            {
                int quantity = -1;
                while (quantity < 0)
                {
                    printf("Input new quantity: ");
                    scanf("%d", &quantity);
                    if (quantity > -1)
                    {
                        bs[index_update].quantity = quantity;
                        printf("Update successfully!\n");
                    }
                    else
                    {
                        printf("Invalid quantity!\n");
                    }
                }
            }
            else
            {
                printf("\n-- Item not found!\n");
            }
            break;
        }

        case 6:
        {
            printf("Input name: ");
            char search_name_delete[50];
            scanf("%49s", search_name_delete);
            int index_delete = searchByName(search_name_delete);
            if (index_delete != size)
            {
                // Remove item by shifting left
                for (int i = index_delete; i < size - 1; i++)
                {
                    bs[i] = bs[i + 1];
                }
                size--;
                printf("Item deleted successfully!\n");
            }
            else
            {
                printf("\n-- Item not found!\n");
            }
            break;
        }

        case 7:
        {
            // Save the current beverage list to a binary file
            fp = fopen("beverages.bin", "wb");
            if (fp == NULL)
            {
                printf("Failed to open file for writing.\n");
                break;
            }
            for (int i = 0; i < size; i++)
            {
                fwrite(&bs[i], sizeof(struct Beverage), 1, fp);
            }
            fclose(fp);
            printf("Data saved to file successfully!\n");

            break;
        }

        case 8:
        {
            // Load beverage list from a file, replacing the current list
            fp = fopen("beverages.bin", "rb");
            if (fp == NULL)
            {
                printf("No saved data found!\n");
                break;
            }
            size = 0;
            while (fread(&bs[size], sizeof(struct Beverage), 1, fp))
            {
                size++;
                if (size >= 10)
                    break; /* avoid overflow of bs array */
            }
            fclose(fp);
            printf("Data loaded from file successfully!\n");
            break;
        }

        case 9:
            return 1;
            break;

        default:
            printf("Please choose from 1 to 9.\n");
            break;
        }
    }

    return 0;
}