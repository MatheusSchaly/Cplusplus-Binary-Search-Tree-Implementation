/*
 * main.cpp
 *
 * Author:      Matheus Schaly
 * Created on:  Aug 14, 2017
 * Description: Creates a Binary Search Tree object to test it
 */

#include "BinarySearchTree.h"
#include "BinarySearchTree.cpp"
#include "Node.cpp"
#include "Node.h"

int main() {
	BinarySearchTree *bst = new BinarySearchTree();
	bst -> insert(10);
	bst -> insert(15);
	bst -> insert(20);
	cout << bst -> search(10) << endl;
	cout << bst -> search(15) << endl;
	cout << bst -> search(30) << endl;
	cout << "Hi";
}





