#include <stdio.h>

int
linear_search(int key,
              int (*arr),
              int size)
{
   int i;
   for (i = 0; i < size; i++)
      if (arr[i] == key)
         return i;
   
   return -1;
}

int main(void)
{
   int size;
   int arr[size];
   int i, key;

   printf("Enter the array size: ");
   scanf("%d", &size);
   
   printf("Enter the Elements: ");
   for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);

   printf("Enter the key to be found: ");
   scanf("%d", &key);

   key = linear_search(key, arr, size);

   printf("key = %d\n", key);

   return 0;
}
