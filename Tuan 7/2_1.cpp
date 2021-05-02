#include<bits/stdc++.h>

using namespace std;

#define sp ' '
struct node {
    int data;
    node* next;
};

// Insert a node into the given position
void insert_node (node** head, int data, int pos) {
    node* temp = *head;
    node* pre_temp;
    node* new_node = new node();
    new_node->data = data;
    int cur_pos = 1;

    if(pos == 1) {
        new_node->next = temp;
        *head = new_node;
        return;
    }

    while(cur_pos < pos) {
        cur_pos = cur_pos + 1;
        pre_temp = temp;
        temp = temp->next;
    }

    pre_temp->next = new_node;
    new_node->next = temp;
}

// Delete a node at the given position
void delete_node (node** head, int pos) {
    node* temp = *head;
    node* pre_temp;
    int cur_pos = 1;

    if(temp == NULL || pos == 1) {
        *head = temp->next;
        delete temp;
        return;
    }

    while(cur_pos < pos) {
        cur_pos = cur_pos + 1;
        pre_temp = temp;
        temp = temp->next;
    }

    pre_temp->next = temp->next;
    delete temp;
}

// Search nodes in lists with given data
void search_node(node* head, int data) {
    node* temp = head;
    int cur_pos = 1;
    vector<int> res;

    while(temp) {
        if(temp->data == data)
            res.push_back(cur_pos);
        temp = temp->next;
        cur_pos = cur_pos + 1;
    }

    if(res.empty()) {
        cout << "Not exist that node." << endl;
        return;
    }

    cout << "Nodes with data " << data << " at the position: ";
    for(int i = 0;i < res.size();i++)
        cout << res[i] << ' ';
}

// Print out a linked list
void print_list(node* head) {
    node* temp = head;

    cout << "Our list is: ";
    while(temp) {
        cout << temp->data << sp;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* my_list = NULL;
    insert_node(&my_list, 2001, 1);
    insert_node(&my_list, 12, 1);
    insert_node(&my_list, 1, 2);

    print_list(my_list);

    delete_node(&my_list, 2);

    print_list(my_list);

    insert_node(&my_list, 1, 2);
    insert_node(&my_list, 1, 1);
    insert_node(&my_list, 2001, 2);

    print_list(my_list);

    search_node(my_list, 1);
    return 0;
}
