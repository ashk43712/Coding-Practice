#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int l, int r, int x) ;

void merge(int arr[], int l, int m, int r);

void mergeSort(int arr[], int l, int r);

int partition (int arr[], int low, int high);

void quickSort(int arr[], int low, int high);

void swap(int* a, int* b);

int kthSmallest(int arr[], int l, int r, int k);

int randomPartition(int arr[], int l, int r) ;

void quickSort(int arr[], int low, int high);

int kthSmallest(int arr[], int l, int r, int k);

// Searches an element key in a pivoted  sorted array arr[] of size n 

int pivotedBinarySearch(int arr[], int n, int key) ;

int findPivot(int arr[], int low, int high) ;

// Median of two sorted arrays with different sizes
double findMedianSortedArrays(int *a, int n,  int *b, int m) ;