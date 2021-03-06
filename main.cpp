// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
// The relational operators for itemType must be overloaded!
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "4";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    bst.insertItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after insert is " << bst.countNodes() << endl;
    cout << endl;

    s = "9";
    cout << bst.isItemInTree(s) << endl;

    bst.makeEmpty();
    cout << "The number of nodes left after makeEmpty is " << bst.countNodes() << endl;
    cout << "Is empty? " << bst.isEmpty() << endl;
    print(bst.preOrderTraversal());


    BST_312<string> bst1;
    bst1.makeEmpty();
    cout << "The number of nodes left after makeEmpty is " << bst1.countNodes() << endl;
    cout << "Is empty? " << bst1.isEmpty() << endl;
    print(bst1.preOrderTraversal());

}