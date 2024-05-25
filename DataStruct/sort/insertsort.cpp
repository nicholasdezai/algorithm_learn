//
// Created by jin on 24-5-25.
//
#include<iostream>
using namespace std;

void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = a;
}

void Insert(int a[],int n) {
    for (int i=1;i<n;i++) {
        if (a[i]<a[i-1]) {
            int temp = a[i];
            int j;
            for (j=i;j>0 && temp<a[j-1];j--) {
                a[j] = a[j-1];
            }
            a[j] = temp;
        }
    }
}

int main() {
    int a[] = {3, 2, 1, 4, 6, 5, 9, 7, 8, 0};
    Insert(a, 10);
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}
