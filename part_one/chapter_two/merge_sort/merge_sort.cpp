#include<iostream>
#include<vector>

using namespace std;

vector<int> arr({ 5,2,4,6,1,3 });

void merge(vector<int>& arr,int p,int q,int r) {
	vector<int> tmparr(arr);
	int i = p, j = q + 1, k = p;
	while (i<=q && j<= r) {
		if (tmparr[i] > tmparr[j]) {
			arr[k++] = tmparr[j++];
		}
		else {
			arr[k++] = tmparr[i++];
		}
	}

	while (i<= q) {
		arr[k++] = tmparr[i++];
	}

	while (j <= r) {
		arr[k++] = tmparr[j++];
	}
}

void merge_sort(vector<int>& arr, int p, int r) {
	if (r > p) {
		int q = p + r >> 1;
		merge_sort(arr, p, q);
		merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

int main()
{
	merge_sort(arr, 0, arr.size() - 1);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] <<endl;
	}
}
