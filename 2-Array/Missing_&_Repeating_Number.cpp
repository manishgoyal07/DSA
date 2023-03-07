//Problem:  MIssing & Repeating Number
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

	int *findTwoElement(int *arr, int n) {
		int pos, val1=0, val2=0, Xor = 0;
		for(int i=0; i<n; i++){
			Xor ^= arr[i];
			Xor ^= (i+1);
		}
		pos = Xor & ~(Xor-1);
		for(int i=0; i<n; i++){
			if(arr[i] & pos == true) val1 ^= arr[i];
			else val2 ^= arr[i];
			if((i+1) & pos == true) val1 ^= (i+1);
			else val2 ^= (i+1);
		}

		int count = 0;
		for (int i=0; i<n; i++) {
			if (arr[i]==val1)
				count++;
		}

		if (count==0)
			return new int[2] {val2, val1};

		return new int[2] {val1, val2};
	}

};

//Time Complexity:  O(4N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
