#pragma once
#include"Bus.h"
#include<fstream>


class Node
{
public:
	Bus *value;
	Node *left, *right;

	Node(Bus* bus) : value(bus), left(nullptr), right(nullptr) {

	}

	~Node() {
		if (value != nullptr)
			delete value;
		if (left != nullptr)
			delete left;
		if (right != nullptr)
			delete right;
	}

	void Insert(Bus* bus) {
		Node *current_node = this;

		while (true) {

			if (current_node->value->number <= bus->number) {
				if (current_node->right == nullptr) {
					current_node->right = new Node(bus);
					break;
				}
				else {
					current_node = current_node->right;
				}
			}
			else {
				if (current_node->left == nullptr) {
					current_node->left = new Node(bus);
					break;
				}
				else {
					current_node = current_node->left;
				}
			}
		
		}
	}

	const Node* Search(int key) const
	{
		const Node *current_node = this;

		while (true) {

			if (current_node->value->number == key) {
				return current_node;
			}
			else if (current_node->value->number < key) {
				if (current_node->right == nullptr) {
					return nullptr;
				}
				else {
					current_node = current_node->right;
				}
			}
			else {
				if (current_node->left == nullptr) {
					return nullptr;
				}
				else {
					current_node = current_node->left;
				}
			}

		}
	}

	void PrintNode(std::ostream& os) const {
		os << "---------------------------\n";
		os << "Bus number     : " << value->number << std::endl;
		os << "Driver         : " << value->driver << std::endl;
		os << "Route          : " << value->route << std::endl;
		os << "Seats number   : " << value->seats << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& os, const Node* node) {

		if (node == nullptr) {
			return os;
		}

		os << node->left;

		node->PrintNode(os);

		os << node->right;

		return os;
	}
};

