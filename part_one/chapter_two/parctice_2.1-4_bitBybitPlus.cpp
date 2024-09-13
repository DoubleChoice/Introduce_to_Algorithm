#include<iostream>
#include<vector>

using namespace std;

vector<bool> A({ 1,0,0,0,1,1 }), B({ 1,0,0,1,1,0 }), C(A.size() + 1);

int main()
{	
	bool Carry = 0;
	for (int i = A.size()-1; i>=0; i--) {
		C[i + 1] = A[i] ^ B[i] ^ Carry;                //the bit result equals A xor B xor Carry
		Carry = (A[i] & B[i]) | ((A[i] | B[i]) & Carry);         //there are two situations that carry will be "1", one is A and B are both "1", another is that there are two "1" in A, B, Carry. So carry equals (A[i] & B[i]) | ((A[i] | B[i]) & Carry).
	}
	C[0] = Carry;
	for (int i = 0; i < C.size(); i++) {
		cout << C[i];
	}
}
