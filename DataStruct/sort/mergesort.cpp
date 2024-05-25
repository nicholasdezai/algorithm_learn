//
// Created by jin on 24-5-25.
//
#include<iostream>
using namespace std;

void Merge(int a[],int low,int high,int mid) {
    int i=0,j=0,k=0;
    int b[11]={0};
    for (k = low;k<=high;k++) {
        b[k] = a[k];
    }
    for (i=low,j=mid+1,k=low;i<=mid&&j<=high;k++) {
        if (b[i] <= b[j]) {
            a[k] = b[i];
            i++;
        } else {
            a[k] = b[j];
            j++;
        }
    }
    while (i <= mid) a[k++] = b[i++];
    while (j <= high) a[k++] = b[j++];

}

void MergeSort(int a[],int low,int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,high,mid);
    }
}

int main() {
    int a[] = {3, 2, 1, 4, 6, 5, 9, 7, 8, 0};
    MergeSort(a, 0,9);
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}
