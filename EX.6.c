#include <stdio.h>
#include <stdlib.h>

int main(){
   FILE *fp1 = fopen("demo.txt", "r");
   FILE *fp2 = fopen("demo2.txt", "r");

   FILE *fp3 = fopen("demo3.txt", "w");
   char c;

   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);

   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);

   printf("Datele au fost copiate");

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
