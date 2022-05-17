
/* Program to print sum of all the elements of a binary tree */
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};
 
/* utility that allocates a new Node with the given key  */
Node* newNode(int key)
{
    Node* node = new Node;
    node->key = key;
    node->left = node->right = nullptr;
    return (node);
}
 
bool es_hoja(Node* root){
    
   cout<< root->key<<": "<< (root->left == nullptr && root->right == nullptr)<<endl;      
   
   return (root->left == nullptr && root->right == nullptr);  
}

/* Function to find sum of all the elements*/
int addBT(Node* root)
{
    //if (root == NULL || es_hoja(root))
    //Si un nodo tiene solo hijo derecho o solo izq no entra porque root (el hijo ese es nullptr)
    if (root == nullptr || es_hoja(root)){
        return 0;

    }else{
        return (root -> key + addBT (root->left) + addBT(root->right));
    }
}

/* Driver program to test above functions*/
int main(){

    //     1
    //   2    3 
    // 4  5  6  7
    //        8  9
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);    
    
    int sum = addBT(root);
    cout << "Sum of all the elements is: " << sum << endl;
 
    return 0;
}