//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

vector<int> findTwoElement(int *arr, int n) {
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

return {val1, val2};
}

};

//Time Complexity:  O(2N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	