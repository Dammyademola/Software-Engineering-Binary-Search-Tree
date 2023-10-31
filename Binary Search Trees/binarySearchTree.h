#pragma once

#include <string>

struct Node
{
	int key;
	std::string data;
	Node* left;
	Node* right;

	Node(int k, std::string val) : key(k), data(val), left(nullptr), right(nullptr) {}

};

class BinarySearchTree
{

private:
	Node* root;

public:
	BinarySearchTree();

	std::string* lookup(int key);
	void insert(int key, std::string data);
};