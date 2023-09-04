#include <iostream>
using namespace std;
/**
 * INGRESAR
 * updateOne()
 */
struct Node
{
    int data;
    Node *next;
};

void create(int data, Node *&head)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    if (head == NULL)
    {
        newNode->next = nullptr;

        head = newNode;
    }
    else
    {

        Node *current = new Node;
        current = head;
        Node *past = new Node;
        while ((current->next != nullptr) && (current->next != head))
        {
            past = current;
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
    }
}
void update(Node *&head, int newData, int filter)
{
    Node *current = head;
    Node *aux = current;
    Node *auxCons = current;

    do
    {
        if (head->data == filter)
        {
            head->data = newData;
        }
        current = current->next;
        if (current->data == filter)
        {
            current->data = newData;
        }

    } while (current->next != head);
}
void read(Node *&head)
{
    Node *current = head;
    Node *aux = current;
    if (head != nullptr)
    {

        do
        {
            cout << current->data << " ";
            current = current->next;
        } while (current->next != head);
        cout << current->data << " ";
    }
}

int main()
{

    Node *head = NULL;
    create(5, head);
    create(2, head);
    create(3, head);
    create(6, head);
    create(5, head);
    create(5, head);
    create(5, head);
    create(5, head);
    create(8, head);

    cout << " " << endl;
    read(head);
    cout << " " << endl;
    update(head, 10, 5);
    cout << " " << endl;
    read(head);
}

/**
 * 2)
 * LISTA CIRCULAR
 */