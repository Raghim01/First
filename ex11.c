#include <stdio.h>

long int findSize(char file_name[])
{
    FILE* fp = fopen(file_name, "r");
    if (fp == NULL) {
        printf("ERROR!\n");
        return -1;
    }

    fseek(fp, 0L, SEEK_END);
    long int res = ftell(fp);
    fclose(fp);

    return res;
}
int main()
{
    char file_name[] = { "test.txt" };
    long int res = findSize(file_name);
    if (res != -1)
        printf("Marimea fisierului este %ld bytes \n", res);
    return 0;
}
