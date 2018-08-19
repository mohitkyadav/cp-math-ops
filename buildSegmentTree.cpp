#include <bits/stdc++.h>

using namespace std;

void buildTree(int* arr, int* tree, int start, int end, int treeNode) {
    int mid = (start + end)/2;
    
    if (start == end) {
        tree[treeNode] = arr[start];
        return;
    }
    
    buildTree(arr, tree, start, mid, 2*treeNode);
    buildTree(arr, tree, mid + 1, end, (2 * treeNode) + 1);
    tree[treeNode] = tree[2 * treeNode] + tree[(2 * treeNode) + 1];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* tree = new int[18];
    buildTree(arr, tree, 0, 8, 1);
    for(size_t i = 1; i < 18; i++) {
        cout << tree[i] << endl;
    }
    
    return 0;
}
