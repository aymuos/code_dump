//#include<iostream>
// C program to generate random numbers 
#include <stdio.h> 
#include <stdlib.h> 

// Driver program 
int main(void) 
{ 
	// This program will create same sequence of 
	// random numbers on every program run 
	int i;
	
	for( i = 0; i<5; i++) 
		printf(" %d ", rand()); 
	return 0; 
} 

