#pragma once
#include <cstdlib>
#include <string>
#include <queue>
#include <stack>
#include <time.h>

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace std;

// ------------------- BST Node -------------------
struct BSTreeNode {
    BSTreeNode* leftchild;
    int data;
    BSTreeNode* rightchild;
};

BSTreeNode* root = nullptr;

// ------------------- BST Functions -------------------
BSTreeNode* newNode(int x) {
    BSTreeNode* node = new BSTreeNode;
    node->data = x;
    node->leftchild = nullptr;
    node->rightchild = nullptr;
    return node;
}

BSTreeNode* insertBSTree(BSTreeNode* node, int x) {
    if (node == nullptr)
        return newNode(x);
    if (x < node->data)
        node->leftchild = insertBSTree(node->leftchild, x);
    else
        node->rightchild = insertBSTree(node->rightchild, x);
    return node;
}

BSTreeNode* findMin(BSTreeNode* node) {
    while (node->leftchild != nullptr)
        node = node->leftchild;
    return node;
}

BSTreeNode* deleteBSTree(BSTreeNode* node, int key, bool% isDeleted) {
    if (node == nullptr) return nullptr;
    if (key < node->data)
        node->leftchild = deleteBSTree(node->leftchild, key, isDeleted);
    else if (key > node->data)
        node->rightchild = deleteBSTree(node->rightchild, key, isDeleted);
    else {
        isDeleted = true;
        if (node->leftchild == nullptr) {
            BSTreeNode* temp = node->rightchild;
            delete node;
            return temp;
        } else if (node->rightchild == nullptr) {
            BSTreeNode* temp = node->leftchild;
            delete node;
            return temp;
        }
        BSTreeNode* temp = findMin(node->rightchild);
        node->data = temp->data;
        node->rightchild = deleteBSTree(node->rightchild, temp->data, isDeleted);
    }
    return node;
}

BSTreeNode* searchTarget(BSTreeNode* node, int key) {
    if (node == nullptr || node->data == key) return node;
    if (key < node->data)
        return searchTarget(node->leftchild, key);
    else
        return searchTarget(node->rightchild, key);
}

// ------------------- Traversals -------------------
System::String^ tree;

void printBSTree(BSTreeNode* node) {
    if (node != nullptr) {
        printBSTree(node->leftchild);
        tree += node->data.ToString() + "_";
        printBSTree(node->rightchild);
    }
}

void inorderTraversal(BSTreeNode* node) {
    if (node != nullptr) {
        inorderTraversal(node->leftchild);
        tree += node->data.ToString() + " ";
        inorderTraversal(node->rightchild);
    }
}

void preorderTraversal(BSTreeNode* node) {
    if (node != nullptr) {
        tree += node->data.ToString() + " ";
        preorderTraversal(node->leftchild);
        preorderTraversal(node->rightchild);
    }
}

void postorderTraversal(BSTreeNode* node) {
    if (node != nullptr) {
        postorderTraversal(node->leftchild);
        postorderTraversal(node->rightchild);
        tree += node->data.ToString() + " ";
    }
}

void levelorderTraversal(BSTreeNode* root) {
    if (root == nullptr) return;
    queue<BSTreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        BSTreeNode* current = q.front(); q.pop();
        tree += current->data.ToString() + " ";
        if (current->leftchild != nullptr) q.push(current->leftchild);
        if (current->rightchild != nullptr) q.push(current->rightchild);
    }
}

// ------------------- Non-Recursive -------------------
void inorderIterative(BSTreeNode* root) {
    tree = "";
    stack<BSTreeNode*> s;
    BSTreeNode* current = root;
    while (current != nullptr || !s.empty()) {
        while (current != nullptr) {
            s.push(current);
            current = current->leftchild;
        }
        current = s.top(); s.pop();
        tree += current->data.ToString() + " ";
        current = current->rightchild;
    }
}

void preorderIterative(BSTreeNode* root) {
    tree = "";
    if (root == nullptr) return;
    stack<BSTreeNode*> s;
    s.push(root);
    while (!s.empty()) {
        BSTreeNode* node = s.top(); s.pop();
        tree += node->data.ToString() + " ";
        if (node->rightchild != nullptr) s.push(node->rightchild);
        if (node->leftchild != nullptr) s.push(node->leftchild);
    }
}

void postorderIterative(BSTreeNode* root) {
    tree = "";
    if (root == nullptr) return;
    stack<BSTreeNode*> s1, s2;
    s1.push(root);
    while (!s1.empty()) {
        BSTreeNode* node = s1.top(); s1.pop();
        s2.push(node);
        if (node->leftchild != nullptr) s1.push(node->leftchild);
        if (node->rightchild != nullptr) s1.push(node->rightchild);
    }
    while (!s2.empty()) {
        tree += s2.top()->data.ToString() + " ";
        s2.pop();
    }
}

void clearBST(BSTreeNode* node) {
    if (node != nullptr) {
        clearBST(node->leftchild);
        clearBST(node->rightchild);
        delete node;
    }
}

// ------------------- Draw BST -------------------
void drawBST(Graphics^ g, BSTreeNode* node, int x, int y, int offsetX, int level) {
    if (node == nullptr) return;
    int radius = 20;
    int nextY = y + 60;

    if (node->leftchild != nullptr) {
        g->DrawLine(Pens::Black, x, y, x - offsetX, nextY);
        drawBST(g, node->leftchild, x - offsetX, nextY, offsetX / 2, level + 1);
    }
    if (node->rightchild != nullptr) {
        g->DrawLine(Pens::Black, x, y, x + offsetX, nextY);
        drawBST(g, node->rightchild, x + offsetX, nextY, offsetX / 2, level + 1);
    }

    Rectangle nodeCircle(x - radius, y - radius, 2 * radius, 2 * radius);
    g->FillEllipse(Brushes::LightBlue, nodeCircle);
    g->DrawEllipse(Pens::Black, nodeCircle);

    System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
    SizeF textSize = g->MeasureString(node->data.ToString(), font);
    PointF textPos(x - textSize.Width / 2, y - textSize.Height / 2);
    g->DrawString(node->data.ToString(), font, Brushes::Black, textPos);
}
