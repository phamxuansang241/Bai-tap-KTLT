#include<bits/stdc++.h>

using namespace std;

#define sp ' '
struct node {
    int id;
    string name;
    string id_course;
    float grade;

    node* next;
};

void insert_node(node** head, int id, string name, string id_course, float grade, int pos) {
    int cur_pos = 1;
    node* temp = *head;
    node* pre_temp;
    node* new_node = new node();
    new_node->id = id;
    new_node->name = name;
    new_node->id_course = id_course;
    new_node->grade = grade;

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

void print_list(node* head) {
    node* temp = head;

    cout << "Our list is: " << endl << endl;
    while(temp) {
        cout << "Id: " << temp->id << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Id_course: " << temp->id_course << endl;
        cout << "Grade: " << temp->grade << endl << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* my_list = NULL;

    insert_node(&my_list, 20195991, "Sang", "MI2001", 8.5, 1);
    insert_node(&my_list, 20195991, "Sang Xuan", "MI2001", 8.0, 1);
    insert_node(&my_list, 20195944, "Innn", "MI2021", 10.0, 1);
    insert_node(&my_list, 20195991, "Dauuu", "MI2024", 10.0, 1);

    print_list(my_list);
    return 0;
}
