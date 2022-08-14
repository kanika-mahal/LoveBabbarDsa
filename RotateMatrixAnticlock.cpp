class Solution{
public:

	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    int k;
	    for(int i=0;i<n;i++)
	    {
	        k=n-1;
	        for(int j=0;j<k;j++)
	        {
	            swap(arr[i][j],arr[i][k]);
	            k--;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i;j<n;j++)
	        swap(arr[i][j],arr[j][i]);
	    }

	    // code here
	}

};
