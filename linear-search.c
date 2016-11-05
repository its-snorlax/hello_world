#include <stdio.h>
void main(){
   int array[100], search, c, totalinput;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&totalinput);
 
   printf("Enter %d integers\n", totalinput);
 
   for (c = 0; c < totalinput; c++) {
   		scanf("%d", &array[c]);
 	}
   printf("Enter the number to search\n");
   scanf("%d", &search);
 
   for (c = 0; c < totalinput; c++){
      if (array[c] == search){
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }
 
}