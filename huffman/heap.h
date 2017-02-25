#pragma once
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

template <class T>
class Heap {
	private:
		vector<T> vec = {};
		int sz = 0;
		static const int OOB = -1; //Used to indicate the index is out of bounds
		int parent(int index) {
			if (index == 0) return OOB;
			else return (index-1) / 2;
		}
		int left_child(int index) {
			if (2*index+1 >= sz) return OOB;
			return 2*index+1;
		}
		int right_child(int index) {
			if (2*index+2 >= sz) return OOB;
			return 2*index+2;
		}
	public:
		int size() { return sz; }
		T& top() {
			if (sz <= 0) {
				cerr << "Topping an empty heap.";
				exit(EXIT_FAILURE);
			}
			return vec.at(0);
		}
		void push(T& item) { 
			vec.push_back(item);
			//Bubble it up to preserve heapness
			int current = sz;
			while (parent(current) != OOB) {
				if (vec.at(current) < vec.at(parent(current))) {
					swap(vec.at(current),vec.at(parent(current)));
					current = parent(current);
				}
				else break;
			}
			sz++;
		}
		void pop() {
			if (sz <= 0) return;
			if (sz == 1) {
				vec.pop_back();
				sz--;
				return;
			}
			vec.at(0) = vec.at(--sz);
			vec.pop_back();
			//Bubble down to preserve heapness
			int current = 0;
			while (left_child(current) != OOB) {
				bool left_less = true;
				if (right_child(current) != OOB) {
					if (vec.at(right_child(current)) < vec.at(left_child(current)))
						left_less = false;
				}
				if (left_less) {
					if (vec.at(left_child(current)) < vec.at(current)) {
						swap(vec.at(current),vec.at(left_child(current)));
						current = left_child(current);
					}
					else break;
				}
				else {
					if (vec.at(right_child(current)) < vec.at(current)) {
						swap(vec.at(current),vec.at(right_child(current)));
						current = right_child(current);
					}
					else break;
				}
			}
		}
};

