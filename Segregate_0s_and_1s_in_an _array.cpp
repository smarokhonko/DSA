#include <iostream>

void printArray(int* array, size_t size);

void segregate(int* array, size_t size)
{
   int left = 0;
   int right = size - 1;

   while (left < right)
   {
      while (array[right] == 1)
         --right;

      if (array[left] == 1)
      {
         int temp = array[left];
         array[left] = array[right];
         array[right] = temp;
      }

      ++left;
   }
}


void main()
{
   int array[] = { 0, 1, 0, 1, 0, 0, 1, 1, 1, 0 };
   printArray(array, sizeof(array) / sizeof(array[0]));

   segregate(array, sizeof(array) / sizeof(array[0]));
   printArray(array, sizeof(array) / sizeof(array[0]));
}

void printArray(int* array, size_t size)
{
   for (int i = 0; i < size; ++i)
   {
      std::cout << *(array + i) << " ";
   }

   std::cout << std::endl;
}