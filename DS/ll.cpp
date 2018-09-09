#include "bits/stdc++.h"

using namespace std;

struct node {
    int val;
    node *next;
};

int main() {
    node *a = new node;
    node *b = new node;
    node *c = new node;

    a->val = 1;
    a->next = b;
    b->val = 2;
    b->next = c;
    c->val = 3;
    c->next = nullptr;
    node *nd = a;
    do {
        cout << nd -> val << endl;
        if(nd->next == nullptr)
            break;
        nd = nd -> next;
    }while(true);
    return 0;
}
