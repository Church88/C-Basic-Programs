#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

class Ent_node{
	public:
		char data;
		Ent_node *left = NULL,*right = NULL;
		Ent_node():data('0'),left(NULL),right(NULL){}
		Ent_node(char new_data,Ent_node *new_left,Ent_node *new_right):data(new_data),left(new_left),right(new_right){}
};

class Ent{
	public:
		int Ent_size;
		Ent_node *root;
		Ent():Ent_size(0),root(NULL){}
		int get_Ent_size() const { return Ent_size; }
		bool dungeon(char value, Ent_node *current){
			char s_value = current->data;
			Ent_node *left = current->left;
			Ent_node *right = current->right;
			if(value == s_value){
				cout << "Found " << s_value << ". Retrace your steps to the entrance.\n";
				return true;
			}
			if(s_value < value){  //A < B
				if(right == NULL) return false;
				cout << "Take the right door at the " << s_value << "." << endl;
				return dungeon(value,right);
			}
			if(s_value > value){
				if(left == NULL)return false;
				cout << "Take the left door at the " << s_value << "." << endl;
				return dungeon(value,left);
			}
			else {
				return false;
			}
		}

		bool search(char value){
			Ent_node *current = root;
			value = toupper(value);
			while(true){
				if(current==NULL)return false;
				if(current->data==value)return true;
				if(value<current->data)current = current->left;
				else current = current->right;
			}
		}
		void print_tree(Ent_node *current){
			if(current==NULL)return;
			print_tree(current->left);
			cout << current->data;
			print_tree(current->right);
		}
		void insert(char new_data){
			Ent_node *node = new Ent_node(new_data,NULL,NULL);
			Ent_node *parent;
			if(root == NULL) root = node;
			else {
				Ent_node *current = root;
				while(current){
					parent = current;
					if(node->data > current->data)current = current->right;
					else current = current->left;
				}
				if(node->data < parent->data) { parent->left = node; }
				else { parent->right = node; }
			}
		}
		void n_solv() {
			cout << "NOT SOLVABLE" << endl;
			exit(1);
		}
	};

