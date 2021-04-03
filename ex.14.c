#include<stdio.h>
#include<stdlib.h>

int main(){
    char*p1,*p2;
    char *c;
    FILE *f1,*f2;
    c = malloc(1000);
    p1 = malloc(1000);
    p2 = malloc(1000);

    printf("Introduceti den. primului file\n");
    gets(p1);
    printf("Introduceti den. primului file\n");
    gets(p2);

    f1 = fopen(p1,"r");
    f2 = fopen(p2,"w");

    if(f1 == NULL || f2 == NULL)
    {
        puts("ERROR");
        exit(0);
    }
    while((c = fgetc(f1))!=EOF)
        fputc(c,f2);
    printf("Succes");
    fclose(f1);
    fclose(f2);

    return 0;
}
