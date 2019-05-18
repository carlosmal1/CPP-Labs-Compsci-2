#include <iostream>
#include <vector>
#include<stdlib.h> 
#include<stdio.h> 
#include <string>

using namespace std;


int main ()
{
    public static void MergeSort(int[] array) {
        int current;
        int leftStart;
        int arraySize = array.length;
        for (current = 1; current <= arraySize-1; current = 2 * current) {
            for (leftStart = 0; leftStart < arraySize-1; leftStart += 2 * current) {

                int mid = leftStart + current - 1;
                int right = getMinimum(leftStart + 2 * current - 1, arraySize-1);

                mergeArray(array, leftStart, mid, right);
            }}}

    void printArray(int A[]) {
        int i;
        for (i=0; i < A.length; i++)

    }

    void mergeArray(int array[], int left, int mid, int right) {
        int leftArraySize  = mid - left + 1;
        int rightArraySize =  right - mid;

        int[] leftArray  = new int[leftArraySize];
        int[] rightArray = new int[rightArraySize];

        for (int i = 0; i < leftArraySize ; i++)
            leftArray [i] = array[left + i];
        for (int j = 0; j < rightArraySize; j++)
            rightArray[j] = array[mid + 1+ j];

        int leftPointer  = 0;
        int rightPointer  = 0;
        int tempPointer  = left;
        while (leftPointer < leftArraySize  && rightPointer  < rightArraySize)  {
            if (leftArray [leftPointer ] <= rightArray[rightPointer ]) {
                array[tempPointer] = leftArray [leftPointer];
                leftPointer++;
            }
            else {
                array[tempPointer] = rightArray[rightPointer];
                rightPointer++;
            }
            tempPointer++;
        }

        while (leftPointer < leftArraySize ) {
            array[tempPointer++] = leftArray [leftPointer++];

            leftPointer++;
            tempPointer++;
        }

        while (rightPointer < rightArraySize) {
            array[tempPointer++] = rightArray[rightPointer++];

            rightPointer++;
            tempPointer++;
        }   }

    public static int getMinimum(int left, int right) {
        if (left <= right) {
            return left;
        } else {
            return right;
        }
        }

    public static void main(String[] args) {
        int arr[] = {12, 11, 13, 5, 6, 7};
        int i=0;
        cout <<"Given array is" << endl;

        for(i=0; i<arr.length; i++)

        MergeSort(arr);

        cout << "Sorted array is";

        for(i=0; i<arr.length; i++)
    }
}