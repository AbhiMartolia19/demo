#include<iostream>
#include<stdio.h>
void insert(int a[], int n )
{
	int i, j, temp;
	for(i = 0; i<n; i++)
	{
		temp = a[i];
		j= i-1;
		
		
		while(j>=0 && temp <=a[j])
		{
			a[j+1] = a[j];
			j = j-1;
		
		}
		a[j+1] = temp;
		
	}
}
void printArr(int a[], int n)
{
	int i;
	for(i = 0;i<n; i++)
	
	   cout<<a[i]<<" "; 
	
}
int main()
{
	int a[] = {23,45,,2,6,62,54,76};
	int n = sizeof(a)/ sizeof(a[0]);
	cout<<"initial elemets are";
	printArr(a,n);
	insert(a,n);
	cout<<"after sorting array ";
	printArr(a,n);
	return 0;
}

