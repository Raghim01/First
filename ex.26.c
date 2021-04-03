#include<stdio.h>

int main(){
    char prop[1000];
    FILE *f;

    f = fopen("Ex.26.txt","w");

    if(f == NULL){
        printf("ERROR");
        exit(1);
    }

    printf("Introduceti propozitia:\n");
    fgets(prop,sizeof(prop),stdin);
    fprintf(f,"%s",prop);
    fclose(f);

    printf("Doriti sa vi se afiseze textul?\n");
    printf("|1 daca da,2 daca nu|\n");
    printf("Raspunsul:");
    int n;
    scanf("%d",&n);
    if(n = 1){
        printf("\n%s",prop);
    }
    else{
        printf("thx:)");
    }

    return 0;
}
