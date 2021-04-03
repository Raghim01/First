#include <stdio.h>

int main(void) {
  FILE *fptr;
  int num[5];
  int sum = 0;
  int i;

  fptr = fopen("test.txt", "w");

 printf("Introduceti numerele:");
 int n = 5;

 for(i = 0;i < n;i++){
    scanf("%d",&num[i]);
 }
 fprintf(fptr,"Numerele:");
 for(i = 0;i < n;i++){
    fprintf(fptr,"\n%d ",num[i]);
 }
 printf("Au fost introduse:\n");
 for(i = 0;i < n;i++){
    printf("%d ",num[i]);
 }
  fclose(fptr);

  return 0;
}
