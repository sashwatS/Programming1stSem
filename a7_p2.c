/*
CH-230-A
a7_p2.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*


#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    char info;
    struct Node *prev;
    struct Node *next;
    //defines the struct for the linked list
} Node;
Node* create_node(char info) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    //allocates memory for new nodes
    if (new_node == NULL) {
        exit(1);
    }
    new_node->info = info;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}
void header(Node **head, char info) {
    Node *new_node = create_node(info);
    if (*head != NULL) {
        new_node->next = *head;
        (*head)->prev = new_node;
    }
    *head = new_node;
    //creates a new header
}
void removed(Node **head, char info) {
    Node *current = *head;
    int found = 0;
    while (current) {
        if (current->info == info) {
            found = 1;
            if (current->prev) {
                current->prev->next = current->next;
            } else {
                *head = current->next;
            }
            if (current->next) {
                current->next->prev = current->prev;
            }
            Node *to_delete = current;
            current = current->next;
            free(to_delete);
        } else {
            current = current->next;
        }
        //finds the specific character in the list and removes it
    }
    if (!found) {
        printf("The element is not in the list!\n");
        //prints an appropriate message if not found
    }
}
void print(Node *head) {
    Node *current = head;
    while (current) {
        printf("%c ", current->info);
        current = current->next;
    }
    printf("\n");
    //prints the information of each node with newlines
}
void printReversed(Node *head) {
    Node *current = head;
    while (current && current->next) {
        current = current->next;
    }
    while (current) {
        printf("%c ", current->info);
        current = current->prev;
    }
    printf("\n");
    //reverses the linked list
}
void freed(Node **head) {
    Node *current = *head;
    while (current) {
        Node *next_node = current->next;
        free(current);
        //frees the memory of the node
        current = next_node;
    }
    *head = NULL;
    //frees the memory of the head
}
int main() {
    Node *head = NULL;
    int n;
    char c;
    int check = 0;
    while (check == 0) {
        scanf("%d", &n);
        switch (n) {
            case 1:
                scanf(" %c", &c);
                header(&head, c);
                break;
            case 2:
                scanf(" %c", &c);
                removed(&head, c);
                break;
            case 3:
                print(head);
                break;
            case 4:
                printReversed(head);
                break;
            case 5:
                freed(&head);
                return 0;
                //calls each function with the switch indefinitely until break
        }
    }
}
*/
