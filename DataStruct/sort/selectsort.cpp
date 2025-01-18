//
// Created by jin on 24-5-26.
//
#include <iostream>
using namespace std;

struct StaticList {
    int data;
    int next;
};

void LinkSelectSorrt(StaticList elem[]) {
    int p,q,pp,pq,h;
    h = p =elem[0].next;
    elem[0].next = -1;
    while (p != -1) {
        q = pp = pq =p;
        p = elem[p].next;
        while (p != -1) {
            if (elem[p].data > elem[q].data) {
                q = p;
                pq = pp;
            }
            pp = p;
            p = elem[p].next;
        }
        if (q == h) {
            h = elem[q].next;
            elem[q].next = elem[0].next;
            elem[0].next = q;
        } else {
            elem[pq].next = elem[q].next;
            elem[q].next = elem[0].next;
            elem[0].next = q;
        }
        p = h;
    }
}

int main() {
    StaticList elem[10] = {{0,1},{46,2},{31,3},{6,4},{19,5},
                            {23,6},{31,-1}};
    LinkSelectSorrt(elem);
    int p = elem[0].next;
    while (p !=-1) {
        cout << elem[p].data <<" ";
        p = elem[p].next;
    }
    return 0;
}