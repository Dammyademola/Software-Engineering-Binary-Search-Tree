#include "binarySearchTree.h"

std::string* BinarySearchTree::lookup(int key)
{
	Node* current = root;

	while (current != nullptr)
	{
		if (key == current->key)
		{
			return &current->data;
		}

		else if (key < current->key)
		{
			current = current->left;
		}

		else
		{
			current = current->right;
		}
	}

	return nullptr;
}


void BinarySearchTree::insert(int key, std::string data)
{
	Node* newNode = new Node(key, data);
	if (root == nullptr)
	{
		root = newNode;
	}

    else
    {
        Node* current = root;
        while (true)
        {
            if (key < current->key)
            {
                if (current->left == nullptr)
                {
                    current->left = newNode;
                    break;
                }
                current = current->left;
            }
            else
            {
                if (current->right == nullptr)
                {
                    current->right = newNode;
                    break;
                }
                current = current->right;
            }
        }
    }
}