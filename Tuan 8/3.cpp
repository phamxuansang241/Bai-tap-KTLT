#include<bits/stdc++.h>

using namespace std;

struct bst_node {
    int data;
    bst_node* left;
    bst_node* right;
};

bst_node* create_node(int data) {
    bst_node* node = new bst_node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
}

bst_node* find_node(bst_node* root, int data) {
    if(root == NULL)
        return NULL;
    if(root->data < data)
        return find_node(root->left, data);
    else if(root->data > data)
        return find_node(root->right, data);
    return root;
}

bst_node* find_node_min(bst_node* root) {
    if(root == NULL)
        return NULL;
    if(root->left == NULL)
        return root;
    return find_node_min(root->left);
}

bst_node* find_node_max(bst_node* root) {
    if(root == NULL)
        return NULL;
    if(root->right == NULL)
        return root;
    return find_node_max(root->right);
}

bst_node* insert_node(bst_node* root, int data) {
    if(root == NULL) {
        root = new bst_node();
        if(root == NULL) {
            cout << "Memory error.\n";
            return NULL;
        }

        root->data = data;
        root->left = root->right = NULL;
    }

    if(root->data > data)
        root->left = insert_node(root->left, data);
    else if(root->data < data)
        root->right = insert_node(root->right, data);

    return root;
}

bst_node* delete_node(bst_node* root, int data) {
    bst_node* temp;

    if(root == NULL)
        cout << "Element not in tree.\n";
    else if(root->data > data)
        root->left = delete_node(root->left, data);
    else if(root->data < data)
        root->right = delete_node(root->right, data);
    else {
        if(root->left && root->right) {
            temp = find_node_max(root->left);
            root->data = temp->data;
            root->left = delete_node(root->left, root->data);
        }
        else {
            temp = root;
            if(root->left)
                root = root->left;
            if(root->right)
                root = root->right;
            if(root->left == NULL && root->right == NULL)
                root = NULL;
            free(temp);
        }
    }

    return root;
}

void Inorder(bst_node* root) {
    if(root) {
        Inorder(root->left);
        cout << root->data << ' ';
        Inorder(root->right);
    }
}

int main() {
    bst_node* my_bst = create_node(10);
    my_bst->left = create_node(7);
    my_bst->right = create_node(12);

    cout << "Inorder traversal of Initial tree:";
    Inorder(my_bst);
    cout << '\n';

    cout << "Insert node 13.\n";
    insert_node(my_bst, 13);
    cout << "Inorder traversal:";
    Inorder(my_bst);
    cout << "\n";

    cout << "Insert node 14.\n";
    insert_node(my_bst, 14);
    cout << "Inorder traversal:";
    Inorder(my_bst);
    cout << "\n";

    cout << "Find the max node: ";
    cout << find_node_max(my_bst)->data << "\n";

    cout << "Find the min node: ";
    cout << find_node_min(my_bst)->data << "\n";

    cout << "Delele node 10.\n";
    delete_node(my_bst, 10);
    cout << "Inorder traversal:";
    Inorder(my_bst);

    return 0;
}
