#include<stdio.h>

int main(){

    FILE *f1;
    FILE *f2;
    FILE *f3;

    char c;
    int n = 0;
    char m[100];
    char *pm = m;

    f1 = fopen("dat1.txt","r");
    f2 = fopen("cod.txt","r+");
    f3 = fopen("dat2.txt","w");

    fgets(pm,100,f2);
    while((c = fgetc(f1))!=EOF){
        n = 0;
        while(*(pm + n)!=NULL){
            if(c == *(pm + n)){
                fprintf(f3,"%c",*(pm+n+2));
                break;
            }
            else n+=4;
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
