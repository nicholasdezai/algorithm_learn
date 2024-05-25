//
// Created by jin on 24-5-25.
//
#include<iostream>
using namespace std;

void Swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = a;
}

void Bubble(int a[],int n) {
    for (int i=0;i<n-1;i++) {
        bool flag = false;
        for (int j=n-1;j>i;j++) {
            if (a[j] < a[j-1]) {
                Swap(a[j],a[j-1]);
                flag =true;
            }
        }
        if (!flag) break;
    }
}
int main() {
    int a[] = {3, 2, 1, 4, 6, 5, 9, 7, 8, 0};
    Bubble(a,10);
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}