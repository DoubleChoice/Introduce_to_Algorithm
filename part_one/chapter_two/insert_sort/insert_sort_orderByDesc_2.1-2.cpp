#include<iostream>
#include<vector>

using namespace std;

vector<int> arr({ 5,2,4,6,1,3 });
 
void insert_sort(vector<int>& arr) {
	for (int j = 1; j < arr.size(); j++) {
		int i = j - 1, temp = arr[j];
		while (i>=0 && arr[i] < temp) {  //just change the operator
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = temp;
	}
}

int main()
{
	insert_sort(arr);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] <<endl;
	}
}
