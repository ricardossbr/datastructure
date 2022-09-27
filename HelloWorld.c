#include <stdio.h>
#include <stdlib.h>

typedef struct {
   int weight;
   int height;
} WeightHeight;

#define max_wheight = 10;

int main() {
   WeightHeight* wh = (WeightHeight*) malloc(sizeof(WeightHeight));
   wh->height = 10;
   wh->weight = 20;
   printf("value Height= %i\n", wh->height);
   printf("value weight= %i\n", wh->weight);
   int a = 30;
   printf("value A= %i\n", a);
   int* b = &a;
   printf("value B= %i\n", b);
   *b = 30 + 10;
   printf("new value A= %i\n", a);
   printf("Hello World!\n");
   return 0;
}




