#include <stdio.h>
int main()
{
   char name[50];
   int marks, i;

   FILE *fptr;
   fptr = (fopen("zile.txt", "a"));

   int st = 0;
   float sm = 0;
   for(i = 0; i < 7; ++i)
   {
      printf("Introduceti ziua:");
      scanf("%s", name);

      printf("Dati suma cheltuita: ");
      scanf("%d", &marks);

      st += marks;
      sm += st/7;

      fprintf(fptr,"\nZiua: %s \nBanii cheltuiti=%d \n", name, marks);

   }
   fprintf(fptr,"\nSuma totala:%d\nSuma medie:%f",st,sm);
   fclose(fptr);

   printf("Suma totala=%d\nSuma medie=%f",st,sm);

   fclose(fptr);
   return 0;
}
