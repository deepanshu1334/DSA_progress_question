#include<iostream> //Given an array Arr of N positive integers. 
//Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).


// C/C++ program to check fixed point  
// in an array using linear search 
#include<stdio.h> 
  
int linearSearch(int arr[], int n) 
{ 
    int i; 
    for(i = 0; i < n; i++) 
    { 
        if(arr[i] == i) 
            return i; 
    } 
  
    /* If no fixed point present then return -1 */
    return -1; 
} 
  
/* Driver program to check above functions */
int main() 
{ 
    int arr[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Fixed Point is %d", linearSearch(arr, n)); 
    getchar(); 
    return 0; 
} 
