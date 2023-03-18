// Description
// Let's create a function which will tell us if an array is sorted or not. What is sorted? :-)

// Write a function that takes an integer array as a parameter (input) and returns a boolean (true/false).

// Your function should return true if the integer array is sorted in either ASC(ascending) or DESC(descending) order.
// Your function should return false if the integer array is not sorted.

// Numbers will be from -2_000_000 to 2_000_000
// The array might have duplicates.

#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
#include<stdio.h>
typedef struct s_integer_array
{
     int size;
     int* array;
 } integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{
  if(param_1->size<2){
      return true;
  }
 bool arr_asc=true;
 bool arr_desc=true;
 for(int i=0;i<param_1->size-1;i++){
     if(*(param_1->array+i)>*(param_1->array+i+1)){
         arr_asc=false;
     }
     if(*(param_1->array+i)<*(param_1->array+i+1)){
         arr_desc=false;
     }

 }
 return arr_asc || arr_desc;
 
}
// int main(){
//     int arr[5]={2,2,1};
//     integer_array tab={2,arr};
//     printf("%d",my_is_sort(&tab));
//     return 0;
// }

