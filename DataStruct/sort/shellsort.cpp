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

void Shell(int a[], int n) {
    for (int d = n / 2; d >= 1; d = d / 2) {
        for (int i=d;i<n;i++) {
            if (a[i] < a[i-d]) {
                int temp = a[i];
                int j;
                for (j=i;j>0&&temp<a[j-d];j-=d) {
                    a[j] = a[j-d];
                }
                a[j] = temp;
            }
        }
    }
}

int main() {
    int a[] = {3, 2, 1, 4, 6, 5, 9, 7, 8, 0};
    Shell(a, 10);
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}
