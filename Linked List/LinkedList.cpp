#pragma once
#include <stdlib.h>
#include <string>
using namespace System;
using namespace System::Windows::Forms;

// ------------------- Structs -------------------
struct node {
    int data;
    struct node* next;
};

struct dnode {
    int data;
    struct dnode* prev;
    struct dnode* next;
};

struct qnode {
    int data;
    struct qnode* next;
};

// ------------------- Node Functions -------------------
struct node* NewNode(int element) {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = element;
    p->next = NULL;
    return p;
}

struct dnode* NewDNode(int element) {
    struct dnode* p = (struct dnode*)malloc(sizeof(struct dnode));
    p->data = element;
    p->prev = NULL;
    p->next = NULL;
    return p;
}

struct qnode* NewQNode(int element) {
    struct qnode* p = (struct qnode*)malloc(sizeof(struct qnode));
    p->data = element;
    p->next = NULL;
    return p;
}

// ------------------- Globals -------------------
struct node* first, * last;
struct node* top;

struct dnode* dfirst, * dlast;
struct qnode* front, * rear;

namespace Project5 {
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form {
    public:
        MyForm(void) {
            InitializeComponent();
            first = NewNode(0); first->next = first; last = first;
            top = NewNode(0); top->next = top;
            initDoublyList();
            initQueue();
        }

    protected:
        ~MyForm() {
            if (components) delete components;
        }

    private:
        // ------------------- Singly Circular List -------------------
        void insertFirst(int element) {
            struct node* p = NewNode(element);
            p->next = first->next;
            first->next = p;
            if (last == first) last = p;
        }

        void insertLast(int element) {
            struct node* p = NewNode(element);
            p->next = last->next;
            last->next = p;
            last = p;
        }

        void printList(struct node* first, ListBox^ listBox) {
            struct node* p;
            String^ str = "";
            for (p = first->next; p != first; p = p->next)
                str += p->data + "==>";
            listBox->Items->Add(str + "<");
        }

        struct node* searchTarget(int target) {
            struct node* p;
            for (p = first->next; (p != first && p->data != target); p = p->next);
            return (p == first) ? nullptr : p;
        }

        struct node* searchTargetBefore(int target) {
            struct node* p, * q;
            for (q = first, p = first->next; (p != first && p->data != target); q = p, p = p->next);
            return (p == first) ? nullptr : q;
        }

        void insertAfter(int element, struct node* x) {
            struct node* p = NewNode(element);
            p->next = x->next;
            x->next = p;
        }

        void deleteAfter(struct node* x) {
            struct node* p = x->next;
            x->next = p->next;
            if (p == last) last = x;
            free(p);
        }

        void clearList(struct node* first) {
            struct node* p;
            while (first->next != first) {
                p = first->next;
                first->next = p->next;
                free(p);
            }
            last = first;
        }

        void reverseSinglyList(struct node* header) {
            if (header->next == header || header->next->next == header) return;
            struct node* prev = header;
            struct node* current = header->next;
            struct node* next = nullptr;
            struct node* firstNode = current;
            while (current != header) {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            header->next = prev;
            firstNode->next = header;
            last = firstNode;
        }

        // ------------------- Stack -------------------
        void push(int element) {
            struct node* p = NewNode(element);
            p->next = top->next;
            top->next = p;
        }

        int pop() {
            struct node* p = top->next;
            if (p == top) return -1;
            int result = p->data;
            top->next = p->next;
            free(p);
            return result;
        }

        void printStack(struct node* first, ListBox^ listBox) {
            struct node* p;
            String^ str = "";
            for (p = first->next; p != first; p = p->next)
                str += p->data + "==>";
            listBox->Items->Add(str + "<");
        }

        // ------------------- Doubly Circular List -------------------
        void initDoublyList() {
            dfirst = NewDNode(0);
            dfirst->next = dfirst;
            dfirst->prev = dfirst;
            dlast = dfirst;
        }

        void insertFirstD(int element) {
            struct dnode* p = NewDNode(element);
            p->next = dfirst->next;
            p->prev = dfirst;
            dfirst->next->prev = p;
            dfirst->next = p;
            if (dlast == dfirst) dlast = p;
        }

        void insertLastD(int element) {
            struct dnode* p = NewDNode(element);
            p->next = dfirst;
            p->prev = dlast;
            dlast->next = p;
            dfirst->prev = p;
            dlast = p;
        }

        void printListD(struct dnode* dfirst, ListBox^ listBox) {
            struct dnode* p;
            String^ str = "";
            for (p = dfirst->next; p != dfirst; p = p->next)
                str += p->data + "<==>";
            listBox->Items->Add(str + "<");
        }

        void printListDReverse(struct dnode* dfirst, ListBox^ listBox) {
            struct dnode* p;
            String^ str = "";
            for (p = dlast; p != dfirst; p = p->prev)
                str += p->data + "<==>";
            listBox->Items->Add("Reverse: " + str + "<");
        }

        void reverseDoublyList(struct dnode* header) {
            if (header->next == header) return;
            struct dnode* current = header;
            struct dnode* temp = nullptr;
            do {
                temp = current->next;
                current->next = current->prev;
                current->prev = temp;
                current = temp;
            } while (current != header);
            dlast = header->next;
        }

        // ------------------- Queue -------------------
        void initQueue() {
            front = NewQNode(0);
            front->next = nullptr;
            rear = front;
        }

        void enqueue(int element) {
            struct qnode* p = NewQNode(element);
            rear->next = p;
            rear = p;
        }

        int dequeue() {
            if (front == rear) return -1;
            struct qnode* p = front->next;
            int result = p->data;
            front->next = p->next;
            if (p == rear) rear = front;
            free(p);
            return result;
        }

        bool isQueueEmpty() {
            return front == rear;
        }

        void printQueue(ListBox^ listBox) {
            struct qnode* p;
            String^ str = "";
            for (p = front->next; p != nullptr; p = p->next)
                str += p->data + "-->";
            listBox->Items->Add(str + "NULL");
        }

        void clearQueue() {
            struct qnode* p;
            while (front->next != nullptr) {
                p = front->next;
                front->next = p->next;
                free(p);
            }
            rear = front;
        }

    private: System::ComponentModel::IContainer^ components;

    // GUI initialization
    void InitializeComponent() {
        
    }
};
} 
