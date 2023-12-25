#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

template<typename T>
class Heapsort
{
	public:
		void sort(vector<T>&); // I want a reference to the vector.	
};

template<typename T>
void Heapsort<T>::sort(vector<T>& data)
{	
	// Don't do anything if empty data
	if (data.size() == 0) { return; }

	// Construct Heap
	make_heap(data.begin(), data.end());
	
	// Heap Extraction
	for(int i = 0; i < data.size(); i++) { pop_heap(data.begin(), data.end() - i); }
}

int main(int argc, char* argv[]) 
{
	Heapsort<int> test; 
	vector<int> vec;
	vec.push_back(5);
	vec.push_back(3);
	vec.push_back(10);
	vec.push_back(1);
	vec.push_back(7);
	test.sort(vec);
	for (int i : vec)
	{
		cout << i << endl;
	}
}
