#include<iostream>

int Partition(int a[], int low, int high) {
    int i = low, j = high;
    int temp = a[low];
    while (i < j) {
        while (i < j && a[j] >= temp) j--;
        a[i] = a[j];
        while (i < j && a[i] <= temp) i++;
        a[j] = a[i];
    }
    a[i] = temp;
    return i;
}

void QuickSort(int a[], int low, int high) {
    if (low < high) {
        int t = Partition(a, low, high);
        QuickSort(a, low, t - 1);
        QuickSort(a, t + 1, high);
    }
}

int main() {
    int a[] = {3, 2, 1, 4, 6, 5, 9, 7, 8, 0};
    QuickSort(a, 0, 9);
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}
