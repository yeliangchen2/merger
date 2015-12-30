#ifndef MERGER_H
#define MERGER_H
#include"iostream"
bool MergeSort(int a[], int n);  
void array_common(int a[],int m,int b[],int n,int &count);
void mergearray(int a[], int first, int mid, int last, int temp[]);  
void mergesort(int a[], int first, int last, int temp[]);  
#endif
