#include <stdio.h>

int main()
{
    FILE *fp = fopen("output.bin", "wb");
    int data[] = {1, 2, 3, 4, 5};
    int data_read[5];
    fwrite(data, sizeof(int), 5, fp);
    fclose(fp);

    fp = fopen("output.bin", "rb");
    fread(data_read, sizeof(int), 5, fp);
    fclose(fp);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", data_read[i]);
    }
    printf("\n");
    return 0;
}